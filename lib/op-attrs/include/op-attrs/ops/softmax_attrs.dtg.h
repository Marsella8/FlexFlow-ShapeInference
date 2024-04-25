// THIS FILE WAS AUTO-GENERATED BY proj. DO NOT MODIFY IT!
// If you would like to modify this datatype, instead modify
// lib/op-attrs/include/op-attrs/ops/softmax_attrs.struct.toml
/* proj-data
{
  "generated_from": "9be043678a4ce7666fc372cded600290"
}
*/

#ifndef _FLEXFLOW_LIB_OP_ATTRS_INCLUDE_OP_ATTRS_OPS_SOFTMAX_ATTRS_DTG_H
#define _FLEXFLOW_LIB_OP_ATTRS_INCLUDE_OP_ATTRS_OPS_SOFTMAX_ATTRS_DTG_H

#include "fmt/format.h"
#include "nlohmann/json.hpp"
#include "op-attrs/ff_dim.dtg.h"
#include <functional>
#include <ostream>
#include <tuple>

namespace FlexFlow {
struct SoftmaxAttrs {
  SoftmaxAttrs() = delete;
  SoftmaxAttrs(::FlexFlow::ff_dim_t const &dim);

  bool operator==(SoftmaxAttrs const &) const;
  bool operator!=(SoftmaxAttrs const &) const;
  bool operator<(SoftmaxAttrs const &) const;
  bool operator>(SoftmaxAttrs const &) const;
  bool operator<=(SoftmaxAttrs const &) const;
  bool operator>=(SoftmaxAttrs const &) const;
  ::FlexFlow::ff_dim_t dim;
};
} // namespace FlexFlow

namespace std {
template <>
struct hash<FlexFlow::SoftmaxAttrs> {
  size_t operator()(FlexFlow::SoftmaxAttrs const &) const;
};
} // namespace std

namespace nlohmann {
template <>
struct adl_serializer<FlexFlow::SoftmaxAttrs> {
  static FlexFlow::SoftmaxAttrs from_json(json const &);
  static void to_json(json &, FlexFlow::SoftmaxAttrs const &);
};
} // namespace nlohmann

namespace FlexFlow {
std::string format_as(SoftmaxAttrs const &);
std::ostream &operator<<(std::ostream &, SoftmaxAttrs const &);
} // namespace FlexFlow

#endif // _FLEXFLOW_LIB_OP_ATTRS_INCLUDE_OP_ATTRS_OPS_SOFTMAX_ATTRS_DTG_H