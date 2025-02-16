#ifndef _FLEXFLOW_TEST_COST_ESTIMATOR_H
#define _FLEXFLOW_TEST_COST_ESTIMATOR_H

#include "compiler/cost_estimate.h"

namespace FlexFlow {

struct TestCostEstimator : public ICostEstimator {
  float estimate_cost(PCGOperatorAttrs const &op,
                      std::vector<ParallelTensorShape> const &inputs,
                      MachineView const &mv) const override {
    return 0.1;
  }
  float estimate_cost(ParallelTensorShape const &tensor_shape,
                      MachineView const &src,
                      MachineView const &dst) const override {
    return 0.1;
  }
};

} // namespace FlexFlow

#endif
