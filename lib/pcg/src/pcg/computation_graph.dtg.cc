// THIS FILE WAS AUTO-GENERATED BY proj. DO NOT MODIFY IT!
// If you would like to modify this datatype, instead modify
// lib/pcg/include/pcg/computation_graph.struct.toml
/* proj-data
{
  "generated_from": "3639f7e8bb97a5ca2c2ef13caff3c84e"
}
*/

#include "pcg/computation_graph.dtg.h"

#include "pcg/layer_attrs.dtg.h"
#include "pcg/tensor_attrs.dtg.h"
#include "utils/graph.h"

namespace FlexFlow {
ComputationGraph::ComputationGraph(
    ::FlexFlow::OutputLabelledMultiDiGraph<::FlexFlow::LayerAttrs,
                                           ::FlexFlow::TensorAttrs> const
        &raw_graph)
    : raw_graph(raw_graph) {}
} // namespace FlexFlow