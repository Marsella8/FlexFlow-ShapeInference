#ifndef _FLEXFLOW_EMBEDDING_H
#define _FLEXFLOW_EMBEDDING_H

#include "op-attrs/ops/embedding.h"
#include "sim_environment.h"
#include "task_spec/op_task_invocation.h"

namespace FlexFlow {

template <>
void register_task<EMBED_FWD_TASK_ID>();
template <>
void register_task<EMBED_BWD_TASK_ID>();

OpTaskInvocation forward(EmbeddingAttrs const &);
OpTaskInvocation backward(EmbeddingAttrs const &);

CostMetrics measure_operator_cost(SimEnvFactory const &sim_factory,
                                  EmbeddingAttrs const &attrs,
                                  InputParallelTensorDesc const &input_shape,
                                  ProfilingSettings const &settings,
                                  MachineView const &machine_view);

} // namespace FlexFlow

#endif
