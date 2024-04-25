// THIS FILE WAS AUTO-GENERATED BY proj. DO NOT MODIFY IT!
// If you would like to modify this datatype, instead modify
// lib/pcg/include/pcg/layer_attrs.struct.toml
/* proj-data
{
  "generated_from": "12b49c15e8defff5118e5607a7823f59"
}
*/

#ifndef _FLEXFLOW_LIB_PCG_INCLUDE_PCG_LAYER_ATTRS_DTG_H
#define _FLEXFLOW_LIB_PCG_INCLUDE_PCG_LAYER_ATTRS_DTG_H

#include "fmt/format.h"
#include "nlohmann/json.hpp"
#include "op-attrs/operator_attrs.h"
#include "utils/json.h"
#include "utils/stack_string.h"
#include <functional>
#include <optional>
#include <ostream>
#include <tuple>

namespace FlexFlow {
struct LayerAttrs {
  LayerAttrs() = delete;
  LayerAttrs(::FlexFlow::CompGraphOperatorAttrs const &attrs,
             std::optional<::FlexFlow::stack_string<MAX_OPNAME>> const &name);

  bool operator==(LayerAttrs const &) const;
  bool operator!=(LayerAttrs const &) const;
  bool operator<(LayerAttrs const &) const;
  bool operator>(LayerAttrs const &) const;
  bool operator<=(LayerAttrs const &) const;
  bool operator>=(LayerAttrs const &) const;
  ::FlexFlow::CompGraphOperatorAttrs attrs;
  std::optional<::FlexFlow::stack_string<MAX_OPNAME>> name;
};
} // namespace FlexFlow

namespace std {
template <>
struct hash<FlexFlow::LayerAttrs> {
  size_t operator()(FlexFlow::LayerAttrs const &) const;
};
} // namespace std

namespace nlohmann {
template <>
struct adl_serializer<FlexFlow::LayerAttrs> {
  static FlexFlow::LayerAttrs from_json(json const &);
  static void to_json(json &, FlexFlow::LayerAttrs const &);
};
} // namespace nlohmann

namespace FlexFlow {
std::string format_as(LayerAttrs const &);
std::ostream &operator<<(std::ostream &, LayerAttrs const &);
} // namespace FlexFlow

#endif // _FLEXFLOW_LIB_PCG_INCLUDE_PCG_LAYER_ATTRS_DTG_H