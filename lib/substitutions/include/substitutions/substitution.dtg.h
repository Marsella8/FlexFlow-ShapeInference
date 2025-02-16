// THIS FILE WAS AUTO-GENERATED BY proj. DO NOT MODIFY IT!
// If you would like to modify this datatype, instead modify
// lib/substitutions/include/substitutions/substitution.struct.toml
/* proj-data
{
  "generated_from": "c101f1d63e2d8d80a0ec9c5f5db4fa12"
}
*/

#ifndef _FLEXFLOW_LIB_SUBSTITUTIONS_INCLUDE_SUBSTITUTIONS_SUBSTITUTION_DTG_H
#define _FLEXFLOW_LIB_SUBSTITUTIONS_INCLUDE_SUBSTITUTIONS_SUBSTITUTION_DTG_H

#include "substitutions/output_graph/output_graph_expr.dtg.h"
#include "substitutions/pcg_pattern.dtg.h"

namespace FlexFlow {
struct Substitution {
  Substitution() = delete;
  Substitution(::FlexFlow::PCGPattern const &pcg_pattern,
               ::FlexFlow::OutputGraphExpr const &output_graph_expr,
               ::FlexFlow::bidict<::FlexFlow::InputMultiDiEdge,
                                  ::FlexFlow::InputMultiDiEdge> const
                   &input_edge_match_to_output,
               ::FlexFlow::bidict<::FlexFlow::OutputMultiDiEdge,
                                  ::FlexFlow::OutputMultiDiEdge> const
                   &output_edge_match_to_output);

  ::FlexFlow::PCGPattern pcg_pattern;
  ::FlexFlow::OutputGraphExpr output_graph_expr;
  ::FlexFlow::bidict<::FlexFlow::InputMultiDiEdge, ::FlexFlow::InputMultiDiEdge>
      input_edge_match_to_output;
  ::FlexFlow::bidict<::FlexFlow::OutputMultiDiEdge,
                     ::FlexFlow::OutputMultiDiEdge>
      output_edge_match_to_output;
};
} // namespace FlexFlow

#endif // _FLEXFLOW_LIB_SUBSTITUTIONS_INCLUDE_SUBSTITUTIONS_SUBSTITUTION_DTG_H
