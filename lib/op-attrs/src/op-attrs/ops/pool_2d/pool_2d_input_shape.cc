#include "op-attrs/ops/pool_2d/pool_2d_input_shape.h"
#include "op-attrs/tensor_shape.h"

namespace FlexFlow {

Pool2DInputShape parse_pool_2d_input_shape(TensorShape const &input) {
  assert(num_dims(input) == 4);

  size_t num_samples = dim_at_idx(input, ff_dim_t{0});
  size_t in_channels = dim_at_idx(input, ff_dim_t{1});
  size_t in_height = dim_at_idx(input, ff_dim_t{2});
  size_t in_width = dim_at_idx(input, ff_dim_t{3});

  return Pool2DInputShape{
    num_samples,
    in_channels,
    in_height,
    in_width,
    input.data_type,
  };
}


} // namespace FlexFlow