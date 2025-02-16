/* Copyright 2023 CMU, Facebook, LANL, MIT, NVIDIA, and Stanford (alphabetical)
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "kernels/linear_kernels.h"
#include "kernels/hip_helper.h"
#include <hip/hip_runtime.h>

namespace FlexFlow {

LinearPerDeviceState::LinearPerDeviceState(FFHandler handler, int batch_size)
    : PerDeviceOpState(handler) {
  // Allocate an all-one's vector
  float *dram_one_ptr = (float *)malloc(sizeof(float) * batch_size);
  for (int i = 0; i < batch_size; i++) {
    dram_one_ptr[i] = 1.0f;
  }
  float *fb_one_ptr;
  checkCUDA(hipMalloc(&fb_one_ptr, sizeof(float) * batch_size));
  checkCUDA(hipMemcpy(fb_one_ptr,
                      dram_one_ptr,
                      sizeof(float) * batch_size,
                      hipMemcpyHostToDevice));
  one_ptr = (float const *)fb_one_ptr;
  // Allocate descriptors
  checkCUDNN(miopenCreateActivationDescriptor(&actiDesc));
  checkCUDNN(miopenCreateTensorDescriptor(&outputTensor));
}

namespace Kernels {
namespace Linear {

bool use_activation(ActiMode mode) {
  switch (mode) {
    case AC_MODE_RELU:
    case AC_MODE_SIGMOID:
    case AC_MODE_TANH:
      return true;
    case AC_MODE_NONE:
      return false;
    default:
      assert(0);
      break;
  }
  return false;
}

void init_kernel(LinearPerDeviceState *m, int batch_size, int channel) {
  if (use_activation(m->activation)) {
    miopenActivationMode_t mode;
    switch (m->activation) {
      case AC_MODE_RELU:
        mode = miopenActivationRELU;
        break;
      case AC_MODE_SIGMOID:
        mode = miopenActivationLOGISTIC;
        break;
      default:
        // Unsupported activation mode
        assert(false);
    }
    checkCUDNN(miopenSetActivationDescriptor(m->actiDesc, mode, 0.0, 0.0, 0.0));
    checkCUDNN(miopenSet4dTensorDescriptor(m->outputTensor,
                                           ff_to_cudnn_datatype(m->output_type),
                                           batch_size,
                                           channel,
                                           1,
                                           1));
  }
}

void forward_kernel(hipStream_t stream,
                    LinearPerDeviceState const *m,
                    void const *input_ptr,
                    void *output_ptr,
                    void const *weight_ptr,
                    void const *bias_ptr,
                    int in_dim,
                    int out_dim,
                    int batch_size) {

  checkCUDA(hipblasSetStream(m->handle.blas, stream));
  checkCUDNN(miopenSetStream(m->handle.dnn, stream));
  float alpha = 1.0f, beta = 0.0f;
  hipblasDatatype_t input_type = ff_to_cuda_datatype(m->input_type);
  hipblasDatatype_t weight_type = ff_to_cuda_datatype(m->weight_type);
  hipblasDatatype_t output_type = ff_to_cuda_datatype(m->output_type);
#if CUDA_VERSION >= 11000
  // TODO: currently set the default to CUBLAS_COMPUTE_16F for best performance
  cublasComputeType_t compute_type = CUBLAS_COMPUTE_16F;
#else
  hipblasDatatype_t compute_type = HIPBLAS_R_32F;
#endif
  checkCUDA(hipblasGemmEx(m->handle.blas,
                          HIPBLAS_OP_T,
                          HIPBLAS_OP_N,
                          out_dim,
                          batch_size,
                          in_dim,
                          &alpha,
                          weight_ptr,
                          weight_type,
                          in_dim,
                          input_ptr,
                          input_type,
                          in_dim,
                          &beta,
                          output_ptr,
                          output_type,
                          out_dim,
                          compute_type,
                          HIPBLAS_GEMM_DEFAULT));
  // use_bias = True
  if (bias_ptr != NULL) {
    checkCUDA(hipblasGemmEx(m->handle.blas,
                            HIPBLAS_OP_T,
                            HIPBLAS_OP_N,
                            out_dim,
                            batch_size,
                            1,
                            &alpha,
                            bias_ptr,
                            weight_type,
                            1,
                            m->one_ptr,
                            HIPBLAS_R_32F,
                            1,
                            &alpha,
                            output_ptr,
                            output_type,
                            out_dim,
                            compute_type,
                            HIPBLAS_GEMM_DEFAULT));
  }
  if (use_activation(m->activation)) {
    checkCUDNN(miopenActivationForward(m->handle.dnn,
                                       m->actiDesc,
                                       &alpha,
                                       m->outputTensor,
                                       output_ptr,
                                       &beta,
                                       m->outputTensor,
                                       output_ptr));
  } else if (m->activation == AC_MODE_GELU) {
    size_t elements = (size_t)out_dim * (size_t)batch_size;
    constexpr float B = 0.7978845608028654f;   // sqrt(2.0/M_PI)
    constexpr float C = 0.035677408136300125f; // 0.044715 * sqrt(2.0/M_PI)
    hipLaunchKernelGGL(gelu_forward_kernel,
                       GET_BLOCKS(elements),
                       CUDA_NUM_THREADS,
                       0,
                       0,
                       elements,
                       B,
                       C,
                       (float *)output_ptr);
  } else if (m->activation == AC_MODE_NONE) {
    // Do nothing
  } else {
    assert(false && "Unsupported activation for Linear");
  }
}

void backward_kernel(hipStream_t stream,
                     LinearPerDeviceState const *m,
                     void const *input_ptr,
                     void *input_grad_ptr,
                     void const *output_ptr,
                     void *output_grad_ptr,
                     void const *kernel_ptr,
                     void *kernel_grad_ptr,
                     void *bias_grad_ptr,
                     int in_dim,
                     int out_dim,
                     int batch_size) {

  checkCUDA(hipblasSetStream(m->handle.blas, stream));
  checkCUDNN(miopenSetStream(m->handle.dnn, stream));

  float alpha = 1.0f;
  hipblasDatatype_t input_type = ff_to_cuda_datatype(m->input_type);
  hipblasDatatype_t weight_type = ff_to_cuda_datatype(m->weight_type);
  hipblasDatatype_t output_type = ff_to_cuda_datatype(m->output_type);
#if CUDA_VERSION >= 11000
  // TODO: currently set the default to CUBLAS_COMPUTE_16F for best performance
  cublasComputeType_t compute_type = CUBLAS_COMPUTE_16F;
#else
  hipblasDatatype_t compute_type = HIPBLAS_R_32F;
#endif
  int output_size = out_dim * batch_size;
  if (m->activation == AC_MODE_RELU) {
    relu_backward_kernel(
        m->output_type, output_grad_ptr, output_ptr, output_size, stream);
  } else if (m->activation == AC_MODE_SIGMOID) {
    sigmoid_backward_kernel(
        m->output_type, output_grad_ptr, output_ptr, output_size, stream);
  } else {
    // TODO: only support relu and sigmoid for now
    assert(m->activation == AC_MODE_NONE);
  }
  // Compute weight gradiant
  // NOTE: we use alpha=1 for kernel_grad to accumulate gradients
  checkCUDA(hipblasGemmEx(m->handle.blas,
                          HIPBLAS_OP_N,
                          HIPBLAS_OP_T,
                          in_dim,
                          out_dim,
                          batch_size,
                          &alpha,
                          input_ptr,
                          input_type,
                          in_dim,
                          output_grad_ptr,
                          output_type,
                          out_dim,
                          &alpha,
                          kernel_grad_ptr,
                          weight_type,
                          in_dim,
                          compute_type,
                          HIPBLAS_GEMM_DEFAULT));
  // Compute bias gradiant
  // NOTE: we use alpha=1 for bias_grad to accumulate gradients
  // use_bias = True
  if (bias_grad_ptr != NULL) {
    checkCUDA(hipblasGemmEx(m->handle.blas,
                            HIPBLAS_OP_N,
                            HIPBLAS_OP_T,
                            1,
                            out_dim,
                            batch_size,
                            &alpha,
                            m->one_ptr,
                            HIPBLAS_R_32F,
                            1,
                            output_grad_ptr,
                            output_type,
                            out_dim,
                            &alpha,
                            bias_grad_ptr,
                            weight_type,
                            1,
                            compute_type,
                            HIPBLAS_GEMM_DEFAULT));
  }
  // Compute data gradiant
  // NOTE: we use alpha=1 for input_grad to accumulate gradients
  if (input_grad_ptr != NULL) {
    checkCUDA(hipblasGemmEx(m->handle.blas,
                            HIPBLAS_OP_N,
                            HIPBLAS_OP_N,
                            in_dim,
                            batch_size,
                            out_dim,
                            &alpha,
                            kernel_ptr,
                            weight_type,
                            in_dim,
                            output_grad_ptr,
                            output_type,
                            out_dim,
                            &alpha,
                            input_grad_ptr,
                            input_type,
                            in_dim,
                            compute_type,
                            HIPBLAS_GEMM_DEFAULT));
  }
}

} // namespace Linear
} // namespace Kernels
} // namespace FlexFlow
