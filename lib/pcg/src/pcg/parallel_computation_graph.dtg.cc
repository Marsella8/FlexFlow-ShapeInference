// THIS FILE WAS AUTO-GENERATED BY proj. DO NOT MODIFY IT!
// If you would like to modify this datatype, instead modify
// lib/pcg/include/pcg/parallel_computation_graph.struct.toml
/* proj-data
{
  "generated_from": "3bb0791e3481298ddea75f4bd134f9e1"
}
*/

#include "pcg/parallel_computation_graph.dtg.h"

#include "pcg/parallel_layer_attrs.dtg.h"
#include "pcg/parallel_tensor_attrs.dtg.h"
#include "utils/graph.h"

namespace FlexFlow {
ParallelComputationGraph::ParallelComputationGraph(
    ::FlexFlow::OutputLabelledMultiDiGraph<
        ::FlexFlow::ParallelLayerAttrs,
        ::FlexFlow::ParallelTensorAttrs> const &raw_graph)
    : raw_graph(raw_graph) {}
} // namespace FlexFlow