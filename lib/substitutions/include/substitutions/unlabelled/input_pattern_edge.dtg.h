// THIS FILE WAS AUTO-GENERATED BY proj. DO NOT MODIFY IT!
// If you would like to modify this datatype, instead modify
// lib/substitutions/include/substitutions/unlabelled/input_pattern_edge.struct.toml
/* proj-data
{
  "generated_from": "d0cc0e65c4e3feb2e9b8435947c99e5f"
}
*/

#ifndef _FLEXFLOW_LIB_SUBSTITUTIONS_INCLUDE_SUBSTITUTIONS_UNLABELLED_INPUT_PATTERN_EDGE_DTG_H
#define _FLEXFLOW_LIB_SUBSTITUTIONS_INCLUDE_SUBSTITUTIONS_UNLABELLED_INPUT_PATTERN_EDGE_DTG_H

#include "utils/graph.h"
#include <functional>
#include <tuple>

namespace FlexFlow {
struct InputPatternEdge {
  InputPatternEdge() = delete;
  InputPatternEdge(::FlexFlow::InputMultiDiEdge const &raw_edge);

  bool operator==(InputPatternEdge const &) const;
  bool operator!=(InputPatternEdge const &) const;
  bool operator<(InputPatternEdge const &) const;
  bool operator>(InputPatternEdge const &) const;
  bool operator<=(InputPatternEdge const &) const;
  bool operator>=(InputPatternEdge const &) const;
  ::FlexFlow::InputMultiDiEdge raw_edge;
};
} // namespace FlexFlow

namespace std {
template <>
struct hash<FlexFlow::InputPatternEdge> {
  size_t operator()(FlexFlow::InputPatternEdge const &) const;
};
} // namespace std

#endif // _FLEXFLOW_LIB_SUBSTITUTIONS_INCLUDE_SUBSTITUTIONS_UNLABELLED_INPUT_PATTERN_EDGE_DTG_H
