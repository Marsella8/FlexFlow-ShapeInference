// THIS FILE WAS AUTO-GENERATED BY proj. DO NOT MODIFY IT!
// If you would like to modify this datatype, instead modify
// lib/substitutions/include/substitutions/sub_parallel_computation_graph.struct.toml
/* proj-data
{
  "generated_from": "0022d1b2c1447667695a120c154a0168"
}
*/

#include "substitutions/sub_parallel_computation_graph.dtg.h"

#include "pcg/parallel_layer_attrs.dtg.h"
#include "pcg/parallel_tensor_attrs.dtg.h"
#include "utils/graph.h"

namespace FlexFlow {
SubParallelComputationGraph::SubParallelComputationGraph(
    ::FlexFlow::OutputLabelledOpenMultiDiGraph<
        ::FlexFlow::ParallelLayerAttrs,
        ::FlexFlow::ParallelTensorAttrs> const &raw_graph)
    : raw_graph(raw_graph) {}
} // namespace FlexFlow
