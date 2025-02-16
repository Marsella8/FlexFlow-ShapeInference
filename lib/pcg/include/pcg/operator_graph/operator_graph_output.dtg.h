// THIS FILE WAS AUTO-GENERATED BY proj. DO NOT MODIFY IT!
// If you would like to modify this datatype, instead modify
// lib/pcg/include/pcg/operator_graph/operator_graph_output.struct.toml
/* proj-data
{
  "generated_from": "3931cb388b00e0634495cdb89cb2af54"
}
*/

#ifndef _FLEXFLOW_LIB_PCG_INCLUDE_PCG_OPERATOR_GRAPH_OPERATOR_GRAPH_OUTPUT_DTG_H
#define _FLEXFLOW_LIB_PCG_INCLUDE_PCG_OPERATOR_GRAPH_OPERATOR_GRAPH_OUTPUT_DTG_H

#include "fmt/format.h"
#include "utils/graph.h"
#include <functional>
#include <ostream>
#include <tuple>

namespace FlexFlow {
struct OperatorGraphOutput {
  OperatorGraphOutput() = delete;
  OperatorGraphOutput(::FlexFlow::Node const &node, int const &idx);

  bool operator==(OperatorGraphOutput const &) const;
  bool operator!=(OperatorGraphOutput const &) const;
  bool operator<(OperatorGraphOutput const &) const;
  bool operator>(OperatorGraphOutput const &) const;
  bool operator<=(OperatorGraphOutput const &) const;
  bool operator>=(OperatorGraphOutput const &) const;
  ::FlexFlow::Node node;
  int idx;
};
} // namespace FlexFlow

namespace std {
template <>
struct hash<FlexFlow::OperatorGraphOutput> {
  size_t operator()(FlexFlow::OperatorGraphOutput const &) const;
};
} // namespace std

namespace FlexFlow {
std::string format_as(OperatorGraphOutput const &);
std::ostream &operator<<(std::ostream &, OperatorGraphOutput const &);
} // namespace FlexFlow

#endif // _FLEXFLOW_LIB_PCG_INCLUDE_PCG_OPERATOR_GRAPH_OPERATOR_GRAPH_OUTPUT_DTG_H
