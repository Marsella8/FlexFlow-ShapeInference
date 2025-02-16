// THIS FILE WAS AUTO-GENERATED BY proj. DO NOT MODIFY IT!
// If you would like to modify this datatype, instead modify
// lib/op-attrs/include/op-attrs/ops/flat_attrs.struct.toml
/* proj-data
{
  "generated_from": "b63924cd671481df30fae314a199c606"
}
*/

#ifndef _FLEXFLOW_LIB_OP_ATTRS_INCLUDE_OP_ATTRS_OPS_FLAT_ATTRS_DTG_H
#define _FLEXFLOW_LIB_OP_ATTRS_INCLUDE_OP_ATTRS_OPS_FLAT_ATTRS_DTG_H

#include "fmt/format.h"
#include "nlohmann/json.hpp"
#include "rapidcheck.h"
#include <functional>
#include <ostream>
#include <tuple>

namespace FlexFlow {
struct FlatAttrs {
  bool operator==(FlatAttrs const &) const;
  bool operator!=(FlatAttrs const &) const;
  bool operator<(FlatAttrs const &) const;
  bool operator>(FlatAttrs const &) const;
  bool operator<=(FlatAttrs const &) const;
  bool operator>=(FlatAttrs const &) const;
};
} // namespace FlexFlow

namespace std {
template <>
struct hash<FlexFlow::FlatAttrs> {
  size_t operator()(FlexFlow::FlatAttrs const &) const;
};
} // namespace std

namespace nlohmann {
template <>
struct adl_serializer<FlexFlow::FlatAttrs> {
  static FlexFlow::FlatAttrs from_json(json const &);
  static void to_json(json &, FlexFlow::FlatAttrs const &);
};
} // namespace nlohmann

namespace rc {
template <>
struct Arbitrary<FlexFlow::FlatAttrs> {
  static Gen<FlexFlow::FlatAttrs> arbitrary();
};
} // namespace rc

namespace FlexFlow {
std::string format_as(FlatAttrs const &);
std::ostream &operator<<(std::ostream &, FlatAttrs const &);
} // namespace FlexFlow

#endif // _FLEXFLOW_LIB_OP_ATTRS_INCLUDE_OP_ATTRS_OPS_FLAT_ATTRS_DTG_H
