#ifndef _FLEXFLOW_OP_META_OPS_TRANSPOSE_ATTRS_H
#define _FLEXFLOW_OP_META_OPS_TRANSPOSE_ATTRS_H

#include "core.h"
#include "op-attrs/ops/transpose_attrs.dtg.h"
#include "op-attrs/parallel_tensor_shape.dtg.h"

namespace FlexFlow {

CHECK_VALID_OP_ATTR(TransposeAttrs);

ParallelTensorShape get_output_shape(TransposeAttrs const &op_attrs, ParallelTensorShape const &input_shape);

} // namespace FlexFlow

#endif
