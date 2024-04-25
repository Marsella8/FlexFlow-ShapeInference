#include "pcg/computation_graph_builder.h"
#include "op-attrs/get_op_type.h"
#include "op-attrs/get_output_shapes.h"
#include "utils/expected.h"
#include "utils/fmt.h"
#include "op-attrs/ops/element_binary.h"
#include "op-attrs/ops/embedding.h"

namespace FlexFlow {

void ComputationGraphBuilder::add_layer(LayerAttrs const &layer,
                                        std::vector<tensor_guid_t> const &inputs,
                                        std::vector<tensor_guid_t> const &weights,
                                        std::vector<tensor_guid_t> const &outputs) {
  NOT_IMPLEMENTED();
}

tensor_guid_t ComputationGraphBuilder::add_layer(
    LayerAttrs const &layer,
    std::vector<tensor_guid_t> const &inputs,
    std::vector<std::pair<TensorShape, std::optional<InitializerAttrs>>> const
        &weight_shapes,
    TensorShape const &output_shape) {
  NOT_IMPLEMENTED();
}

std::vector<tensor_guid_t> ComputationGraphBuilder::add_layer(
    LayerAttrs const &layer,
    std::vector<tensor_guid_t> const &inputs,
    std::vector<std::pair<TensorShape, std::optional<InitializerAttrs>>> const
        &weight_shapes,
    std::vector<TensorShape> const &output_shapes) {
  NOT_IMPLEMENTED();
}

tensor_guid_t ComputationGraphBuilder::broadcast(tensor_guid_t const &, TensorShape const &) {
  NOT_IMPLEMENTED();
}

tensor_guid_t ComputationGraphBuilder::cast(tensor_guid_t const &input,
                                     DataType dtype,
                                     std::optional<std::string> const &name){
    NOT_IMPLEMENTED()}

tensor_guid_t ComputationGraphBuilder::as_type(tensor_guid_t const &x,
                                        DataType data_type,
                                        std::string const &name) {
  DataType x_datatype = this->get_shape(x).data_type;
  if (x_datatype < data_type) {
    return this->cast(x, data_type, name);
  } else if (x_datatype > data_type) {
    throw mk_runtime_error("Could not convert provided tensor data type {} to "
                           "desired data type {}",
                           x_datatype,
                           data_type);
  }
  return x;
}

static std::string get_default_name(OperatorType op_type) {
  return get_operator_type_name(op_type);
}

static std::string get_default_name(ComputationGraphAttrs const &attrs) {
  return get_default_name(get_op_type(attrs));
}

template <typename... Args>
static std::string get_default_name(std::variant<Args...> const &attrs) {
  return get_default_name(widen<ComputationGraphAttrs>(attrs));
}

tensor_guid_t ComputationGraphBuilder::element_unary(
    ElementUnaryAttrs const &attrs,
    tensor_guid_t const &x,
    std::optional<std::string> const &maybe_name) {
  std::string name = maybe_name.value_or(get_default_name(attrs));

  tensor_guid_t input = this->as_type(x, DataType::FLOAT, name + "input_pre_cast");

  LayerAttrs layer = {attrs, name};
  TensorShape output_shape = get_output_shape(attrs, this->get_shape(input));

  return this->add_layer(layer, {input}, {}, output_shape);
}

tensor_guid_t ComputationGraphBuilder::element_scalar_unary(
    ElementScalarUnaryAttrs const &attrs,
    tensor_guid_t const &x,
    std::optional<std::string> const &maybe_name) {
  std::string name = maybe_name.value_or(get_default_name(attrs));

  tensor_guid_t input = this->as_type(x, DataType::FLOAT, name + "input_pre_cast");

  LayerAttrs layer = {attrs, name};
  TensorShape output_shape = get_output_shape(attrs, this->get_shape(input));

  return this->add_layer(layer, {input}, {}, output_shape);
}

tensor_guid_t ComputationGraphBuilder::element_unary(
    OperatorType op_type,
    tensor_guid_t const &input,
    std::optional<std::string> const &name) {
  ElementUnaryAttrs attrs = {op_type};
  return this->element_unary(attrs, input, name);
}

tensor_guid_t ComputationGraphBuilder::element_scalar_unary(
    OperatorType op_type,
    tensor_guid_t const &input,
    float scalar,
    std::optional<std::string> const &name) {
  ElementScalarUnaryAttrs attrs = {op_type, scalar};
  return this->element_scalar_unary(attrs, input, name);
}

tensor_guid_t ComputationGraphBuilder::element_binary(
    OperatorType op_type,
    tensor_guid_t const &lhs,
    tensor_guid_t const &rhs,
    std::optional<std::string> const &maybe_name) {
  std::string name = maybe_name.value_or(get_default_name(op_type));

  TensorShape compute_shape = this->get_broadcast_target_shape({lhs, rhs});
  DataType compute_type = std::max(
    this->get_shape(lhs).data_type, 
    this->get_shape(rhs).data_type
  );

  tensor_guid_t lhs_input = this->as_type(this->broadcast(lhs, compute_shape),
                                         compute_type,
                                         name + "_inputl_pre_cast");
  tensor_guid_t rhs_input = this->as_type(this->broadcast(rhs, compute_shape),
                                         compute_type,
                                         name + "_inputr_pre_cast");

  ElementBinaryAttrs attrs = {op_type, compute_type, false, false};

  LayerAttrs layer = {attrs, name};
  TensorShape output_shape = get_output_shape(
    attrs, 
    this->get_shape(lhs_input), 
    this->get_shape(rhs_input)
  );

  return this->add_layer(layer, {lhs_input, rhs_input}, {}, output_shape);
}

tensor_guid_t ComputationGraphBuilder::exp(tensor_guid_t const &input,
                                    std::optional<std::string> const &name) {
  return this->element_unary(OperatorType::EXP, input, name);
}

tensor_guid_t ComputationGraphBuilder::add(tensor_guid_t const &lhs,
                                    tensor_guid_t const &rhs,
                                    std::optional<std::string> const &name) {
  return this->element_binary(OperatorType::EW_ADD, lhs, rhs, name);
}

tensor_guid_t
    ComputationGraphBuilder::subtract(tensor_guid_t const &lhs,
                                      tensor_guid_t const &rhs,
                                      std::optional<std::string> const &name) {
  return this->element_binary(OperatorType::EW_SUB, lhs, rhs, name);
}

tensor_guid_t
    ComputationGraphBuilder::multiply(tensor_guid_t const &lhs,
                                      tensor_guid_t const &rhs,
                                      std::optional<std::string> const &name) {
  return this->element_binary(OperatorType::EW_MUL, lhs, rhs, name);
}

tensor_guid_t ComputationGraphBuilder::divide(tensor_guid_t const &lhs,
                                       tensor_guid_t const &rhs,
                                       std::optional<std::string> const &name) {
  return this->element_binary(OperatorType::EW_DIV, lhs, rhs, name);
}

tensor_guid_t ComputationGraphBuilder::max(tensor_guid_t const &lhs,
                                    tensor_guid_t const &rhs,
                                    std::optional<std::string> const &name) {
  return this->element_binary(OperatorType::EW_MAX, lhs, rhs, name);
}

tensor_guid_t ComputationGraphBuilder::min(tensor_guid_t const &lhs,
                                    tensor_guid_t const &rhs,
                                    std::optional<std::string> const &name) {
  return this->element_binary(OperatorType::EW_MIN, lhs, rhs, name);
}

tensor_guid_t ComputationGraphBuilder::rsqrt(tensor_guid_t const &input,
                                      std::optional<std::string> const &name) {
  return this->element_unary(OperatorType::RSQRT, input, name);
}

tensor_guid_t ComputationGraphBuilder::pow(tensor_guid_t const &input,
                                    float exponent,
                                    std::optional<std::string> const &name) {
  return this->element_scalar_unary(OperatorType::POW, input, exponent, name);
}

tensor_guid_t ComputationGraphBuilder::scalar_multiply(
    tensor_guid_t const &input, float scalar, std::optional<std::string> const &name) {
  return this->element_scalar_unary(OperatorType::SCALAR_MULTIPLY, input, scalar, name);
}

tensor_guid_t ComputationGraphBuilder::scalar_add(
    tensor_guid_t const &input, float scalar, std::optional<std::string> const &name) {
  return this->element_scalar_unary(OperatorType::SCALAR_ADD, input, scalar, name);
}

tensor_guid_t ComputationGraphBuilder::scalar_sub(
    tensor_guid_t const &lhs, float rhs, std::optional<std::string> const &name) {
  return this->element_scalar_unary(OperatorType::SCALAR_SUB, lhs, rhs, name);
}

tensor_guid_t ComputationGraphBuilder::scalar_truediv(
    tensor_guid_t const &numerator,
    float denominator,
    std::optional<std::string> const &name) {
  return this->element_scalar_unary(
      OperatorType::SCALAR_TRUE_DIV, numerator, denominator, name);
}

tensor_guid_t ComputationGraphBuilder::sin(tensor_guid_t const &input,
                                    std::optional<std::string> const &name) {
  return this->element_unary(OperatorType::SIN, input, name);
}

tensor_guid_t ComputationGraphBuilder::cos(tensor_guid_t const &input,
                                    std::optional<std::string> const &name) {
  return this->element_unary(OperatorType::COS, input, name);
}

tensor_guid_t ComputationGraphBuilder::relu(tensor_guid_t const &input,
                                     std::optional<std::string> const &name) {
  return this->element_unary(OperatorType::RELU, input, name);
}

tensor_guid_t
    ComputationGraphBuilder::identity(tensor_guid_t const &input,
                                      std::optional<std::string> const &name) {
  return this->element_unary(OperatorType::IDENTITY, input, name);
}

tensor_guid_t ComputationGraphBuilder::gelu(tensor_guid_t const &input,
                                     std::optional<std::string> const &name) {
  return this->element_unary(OperatorType::GELU, input, name);
}

tensor_guid_t
    ComputationGraphBuilder::sigmoid(tensor_guid_t const &input,
                                     std::optional<std::string> const &name) {
  return this->element_unary(OperatorType::SIGMOID, input, name);
}

tensor_guid_t ComputationGraphBuilder::tanh(tensor_guid_t const &input,
                                     std::optional<std::string> const &name) {
  return this->element_unary(OperatorType::TANH, input, name);
}

tensor_guid_t ComputationGraphBuilder::elu(tensor_guid_t const &input,
                                    std::optional<std::string> const &name) {
  return this->element_unary(OperatorType::ELU, input, name);
}

tensor_guid_t ComputationGraphBuilder::conv2d(
    tensor_guid_t const &x,
    int outChannels,
    int kernelH,
    int kernelW,
    int strideH,
    int strideW,
    int paddingH,
    int paddingW,
    std::optional<Activation> const &activation,
    int groups,
    bool use_bias,
    std::optional<InitializerAttrs> const &kernel_initializer,
    std::optional<InitializerAttrs> const &bias_initializer,
    std::optional<RegularizerAttrs> const &kernel_regularizer,
    std::optional<std::string> const &maybe_name) {
  Conv2DAttrs attrs = {outChannels,
                       kernelH,
                       kernelW,
                       strideH,
                       strideW,
                       paddingH,
                       paddingW,
                       groups,
                       activation,
                       use_bias};
  std::string name = maybe_name.value_or(get_default_name(attrs));

  tensor_guid_t input = this->as_type(x, DataType::FLOAT, name + "input_pre_cast");

  LayerAttrs layer = {attrs, name};
  TensorShape output_shape = get_output_shape(attrs, this->get_shape(input));

  std::vector<std::pair<TensorShape, std::optional<InitializerAttrs>>> weights;

  weights.push_back({get_kernel_shape(attrs, this->get_shape(input)), kernel_initializer});

  if (use_bias) {
    weights.push_back({get_bias_shape(attrs, this->get_shape(input)), bias_initializer});
  }

  return this->add_layer(layer, {input}, weights, output_shape);
}

tensor_guid_t ComputationGraphBuilder::dropout(
    tensor_guid_t const &x,
    float rate,
    unsigned long long seed,
    std::optional<std::string> const &maybe_name) {
  DropoutAttrs attrs = {rate, seed};
  std::string name = maybe_name.value_or(get_default_name(attrs));

  LayerAttrs layer = {attrs, name};
  tensor_guid_t input = this->as_type(x, DataType::FLOAT, name + "input_pre_cast");

  TensorShape output_shape = get_output_shape(attrs, this->get_shape(input));

  return this->add_layer(layer, {input}, {}, output_shape);
}

tensor_guid_t ComputationGraphBuilder::embedding(
    tensor_guid_t const &x,
    int num_entries,
    int outDim,
    AggregateOp aggr,
    DataType dtype,
    std::optional<InitializerAttrs> const &kernel_initializer,
    std::optional<std::string> const &maybe_name) {
  EmbeddingAttrs attrs = {num_entries, outDim, aggr, dtype};
  std::string name = maybe_name.value_or(get_default_name(attrs));

  LayerAttrs layer = {attrs, name};
  tensor_guid_t input = this->as_type(x, DataType::FLOAT, name + "input_pre_cast");

  TensorShape output_shape = get_output_shape(attrs, this->get_shape(input));
  TensorShape weights_shape = get_weights_shape(attrs, this->get_shape(input));

  return this->add_layer(
      layer, {input}, {{weights_shape, kernel_initializer}}, output_shape);
}

std::vector<tensor_guid_t> ComputationGraphBuilder::gather(
    tensor_guid_t const &input,
    tensor_guid_t const &index,
    ff_dim_t dim,
    std::optional<std::string> const &maybe_name) {
  GatherAttrs attrs = {dim};
  std::string name = maybe_name.value_or(get_default_name(attrs));

  LayerAttrs layer = {attrs, name};
  if (this->get_shape(index).data_type != DataType::INT32 &&
      this->get_shape(index).data_type != DataType::INT64) {
    throw mk_runtime_error("Invalid data type for input tensor 2 for Gather: "
                           "{} (should be {} or {})",
                           this->get_shape(input).data_type,
                           DataType::INT32,
                           DataType::INT64);
  }
  std::vector<TensorShape> output_shapes =
      get_output_shapes(attrs, this->get_shape(input), this->get_shape(index));

  return this->add_layer(layer, {input}, {}, output_shapes);
}

TensorShape ComputationGraphBuilder::get_shape(tensor_guid_t const &t) const {
  return this->get_attrs(t).shape;
}

/* std::vector<TensorShape> ComputationGraphBuilder::get_shapes(std::vector<tensor_guid_t> const &ts) const { */
/*   return transform(ts, [&](tensor_guid_t const &t) { return this->get_shape(t); }); */
/* } */

// tensor_guid_t ComputationGraphBuilder::aggregate(
//     tensor_guid_t const &gate_preds,
//     tensor_guid_t const &gate_assign,
//     tensor_guid_t const &true_gate_assign,
//     tensor_guid_t const &full_gate_gradients,
//     std::vector<tensor_guid_t> const &exp_preds,
//     int n,
//     float lambda_bal,
//     std::optional<std::string> const &maybe_name) {
//   AggregateAttrs attrs = {n, lambda_bal};
//   std::string name = maybe_name.value_or(get_default_name(attrs));

//   LayerAttrs layer = {attrs, name};
//   TensorShape output_shape = get_output_shape(attrs,
//                                               get_shape(gate_preds),
//                                               get_shape(gate_assign),
//                                               get_shape(true_gate_assign),
//                                               get_shape(full_gate_gradients),
//                                               get_shape(exp_preds));

//   std::vector<tensor_guid_t> inputs = {
//       gate_preds, gate_assign, true_gate_assign, full_gate_gradients};
//   extend(inputs, exp_preds);
//   return this->add_layer(layer, inputs, {}, output_shape);
// }

tensor_guid_t ComputationGraphBuilder::batch_norm(
    tensor_guid_t const &input,
    bool relu,
    std::optional<std::string> const &maybe_name) {
  BatchNormAttrs attrs = BatchNormAttrs{relu};
  std::string name = maybe_name.value_or(get_default_name(attrs));

  LayerAttrs layer = {attrs, name};

  TensorShape output_shape = get_output_shape(attrs, this->get_shape(input));

  return this->add_layer(layer, {input}, {}, output_shape);
}

TensorShape ComputationGraphBuilder::get_broadcast_target_shape(
    std::vector<tensor_guid_t> const &) {
  NOT_IMPLEMENTED();
}

TensorShape ComputationGraphBuilder::get_broadcast_target_shape(
    std::vector<TensorShape> const &) {
  NOT_IMPLEMENTED();
}

} // namespace FlexFlow