#ifndef _FLEXFLOW_REPLICATE_H
#define _FLEXFLOW_REPLICATE_H

#include "op-attrs/ops/replicate.h"
#include "sim_environment.h"
#include "task_spec/op_task_invocation.h"

namespace FlexFlow {

template <>
void register_task<REPLICATE_INIT_TASK_ID>();
template <>
void register_task<REPLICATE_FWD_TASK_ID>();
template <>
void register_task<REPLICATE_BWD_TASK_ID>();

OpTaskInvocation init(ReplicateAttrs const &);
OpTaskInvocation forward(ReplicateAttrs const &);
OpTaskInvocation backward(ReplicateAttrs const &);

CostMetrics measure_operator_cost(SimEnvFactory const &sim_factory,
                                  ReplicateAttrs const &attrs,
                                  InputParallelTensorDesc const &input,
                                  ProfilingSettings const &settings,
                                  MachineView const &machine_view);
} // namespace FlexFlow

#endif
