// THIS FILE WAS AUTO-GENERATED BY proj. DO NOT MODIFY IT!
// If you would like to modify this datatype, instead modify
// lib/pcg/include/pcg/operator_graph/operator_graph_output.struct.toml
/* proj-data
{
  "generated_from": "3931cb388b00e0634495cdb89cb2af54"
}
*/

#include "pcg/operator_graph/operator_graph_output.dtg.h"

#include "utils/graph.h"
#include <sstream>

namespace FlexFlow {
OperatorGraphOutput::OperatorGraphOutput(::FlexFlow::Node const &node,
                                         int const &idx)
    : node(node), idx(idx) {}
bool OperatorGraphOutput::operator==(OperatorGraphOutput const &other) const {
  return std::tie(this->node, this->idx) == std::tie(other.node, other.idx);
}
bool OperatorGraphOutput::operator!=(OperatorGraphOutput const &other) const {
  return std::tie(this->node, this->idx) != std::tie(other.node, other.idx);
}
bool OperatorGraphOutput::operator<(OperatorGraphOutput const &other) const {
  return std::tie(this->node, this->idx) < std::tie(other.node, other.idx);
}
bool OperatorGraphOutput::operator>(OperatorGraphOutput const &other) const {
  return std::tie(this->node, this->idx) > std::tie(other.node, other.idx);
}
bool OperatorGraphOutput::operator<=(OperatorGraphOutput const &other) const {
  return std::tie(this->node, this->idx) <= std::tie(other.node, other.idx);
}
bool OperatorGraphOutput::operator>=(OperatorGraphOutput const &other) const {
  return std::tie(this->node, this->idx) >= std::tie(other.node, other.idx);
}
} // namespace FlexFlow

namespace std {
size_t hash<FlexFlow::OperatorGraphOutput>::operator()(
    FlexFlow::OperatorGraphOutput const &x) const {
  size_t result = 0;
  result ^= std::hash<::FlexFlow::Node>{}(x.node) + 0x9e3779b9 + (result << 6) +
            (result >> 2);
  result ^=
      std::hash<int>{}(x.idx) + 0x9e3779b9 + (result << 6) + (result >> 2);
  return result;
}
} // namespace std

namespace FlexFlow {
std::string format_as(OperatorGraphOutput const &x) {
  std::ostringstream oss;
  oss << "<OperatorGraphOutput";
  oss << " node=" << x.node;
  oss << " idx=" << x.idx;
  oss << ">";
  return oss.str();
}
std::ostream &operator<<(std::ostream &s, OperatorGraphOutput const &x) {
  return s << fmt::to_string(x);
}
} // namespace FlexFlow
