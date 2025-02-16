// THIS FILE WAS AUTO-GENERATED BY proj. DO NOT MODIFY IT!
// If you would like to modify this datatype, instead modify
// lib/substitutions/include/substitutions/output_graph/attr_constant.struct.toml
/* proj-data
{
  "generated_from": "1e5beabcb8e3657d8fe9c9c8b1310cb1"
}
*/

#ifndef _FLEXFLOW_LIB_SUBSTITUTIONS_INCLUDE_SUBSTITUTIONS_OUTPUT_GRAPH_ATTR_CONSTANT_DTG_H
#define _FLEXFLOW_LIB_SUBSTITUTIONS_INCLUDE_SUBSTITUTIONS_OUTPUT_GRAPH_ATTR_CONSTANT_DTG_H

#include "fmt/format.h"
#include "substitutions/operator_pattern/operator_attribute_value.dtg.h"
#include <functional>
#include <ostream>
#include <tuple>

namespace FlexFlow {
struct AttrConstant {
  AttrConstant() = delete;
  AttrConstant(::FlexFlow::OperatorAttributeValue const &value);

  bool operator==(AttrConstant const &) const;
  bool operator!=(AttrConstant const &) const;
  bool operator<(AttrConstant const &) const;
  bool operator>(AttrConstant const &) const;
  bool operator<=(AttrConstant const &) const;
  bool operator>=(AttrConstant const &) const;
  ::FlexFlow::OperatorAttributeValue value;
};
} // namespace FlexFlow

namespace std {
template <>
struct hash<FlexFlow::AttrConstant> {
  size_t operator()(FlexFlow::AttrConstant const &) const;
};
} // namespace std

namespace FlexFlow {
std::string format_as(AttrConstant const &);
std::ostream &operator<<(std::ostream &, AttrConstant const &);
} // namespace FlexFlow

#endif // _FLEXFLOW_LIB_SUBSTITUTIONS_INCLUDE_SUBSTITUTIONS_OUTPUT_GRAPH_ATTR_CONSTANT_DTG_H
