// THIS FILE WAS AUTO-GENERATED BY proj. DO NOT MODIFY IT!
// If you would like to modify this datatype, instead modify
// lib/op-attrs/include/op-attrs/ops/input_attrs.struct.toml
/* proj-data
{
  "generated_from": "139ea46d57a3c8738b31b17a8c59a0aa"
}
*/

#ifndef _FLEXFLOW_LIB_OP_ATTRS_INCLUDE_OP_ATTRS_OPS_INPUT_ATTRS_DTG_H
#define _FLEXFLOW_LIB_OP_ATTRS_INCLUDE_OP_ATTRS_OPS_INPUT_ATTRS_DTG_H

#include "fmt/format.h"
#include "nlohmann/json.hpp"
#include "rapidcheck.h"
#include <functional>
#include <ostream>
#include <tuple>

namespace FlexFlow {
struct InputAttrs {
  bool operator==(InputAttrs const &) const;
  bool operator!=(InputAttrs const &) const;
  bool operator<(InputAttrs const &) const;
  bool operator>(InputAttrs const &) const;
  bool operator<=(InputAttrs const &) const;
  bool operator>=(InputAttrs const &) const;
};
} // namespace FlexFlow

namespace std {
template <>
struct hash<FlexFlow::InputAttrs> {
  size_t operator()(FlexFlow::InputAttrs const &) const;
};
} // namespace std

namespace nlohmann {
template <>
struct adl_serializer<FlexFlow::InputAttrs> {
  static FlexFlow::InputAttrs from_json(json const &);
  static void to_json(json &, FlexFlow::InputAttrs const &);
};
} // namespace nlohmann

namespace rc {
template <>
struct Arbitrary<FlexFlow::InputAttrs> {
  static Gen<FlexFlow::InputAttrs> arbitrary();
};
} // namespace rc

namespace FlexFlow {
std::string format_as(InputAttrs const &);
std::ostream &operator<<(std::ostream &, InputAttrs const &);
} // namespace FlexFlow

#endif // _FLEXFLOW_LIB_OP_ATTRS_INCLUDE_OP_ATTRS_OPS_INPUT_ATTRS_DTG_H
