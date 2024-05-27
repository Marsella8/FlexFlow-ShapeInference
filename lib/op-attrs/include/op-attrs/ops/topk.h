#ifndef _FLEXFLOW_TOPK_ATTRS_H
#define _FLEXFLOW_TOPK_ATTRS_H

#include "core.h"
#include "op-attrs/ops/topk_attrs.dtg.h"
#include "op-attrs/parallel_tensor_shape.dtg.h"

namespace FlexFlow {

CHECK_VALID_OP_ATTR(TopKAttrs);

ParallelTensorShape get_output_shape(TopKAttrs const &attrs, ParallelTensorShape const &input_shape);

} // namespace FlexFlow

#endif
