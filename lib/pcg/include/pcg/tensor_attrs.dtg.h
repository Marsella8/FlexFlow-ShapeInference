// THIS FILE WAS AUTO-GENERATED BY proj. DO NOT MODIFY IT!
// If you would like to modify this datatype, instead modify
// lib/pcg/include/pcg/tensor_attrs.struct.toml
/* proj-data
{
  "generated_from": "68447a4357476647ef25dd39dfd12578"
}
*/

#ifndef _FLEXFLOW_LIB_PCG_INCLUDE_PCG_TENSOR_ATTRS_DTG_H
#define _FLEXFLOW_LIB_PCG_INCLUDE_PCG_TENSOR_ATTRS_DTG_H

#include "fmt/format.h"
#include "nlohmann/json.hpp"
#include "op-attrs/param_sync.dtg.h"
#include "op-attrs/tensor_shape.dtg.h"
#include "pcg/initializer_attrs.dtg.h"
#include <functional>
#include <optional>
#include <ostream>
#include <tuple>

namespace FlexFlow {
struct TensorAttrs {
  TensorAttrs() = delete;
  TensorAttrs(::FlexFlow::TensorShape const &shape,
              std::optional<::FlexFlow::InitializerAttrs> const &initializer,
              bool const &create_gradients,
              std::optional<::FlexFlow::ParamSync> const &sync_type);

  bool operator==(TensorAttrs const &) const;
  bool operator!=(TensorAttrs const &) const;
  bool operator<(TensorAttrs const &) const;
  bool operator>(TensorAttrs const &) const;
  bool operator<=(TensorAttrs const &) const;
  bool operator>=(TensorAttrs const &) const;
  ::FlexFlow::TensorShape shape;
  std::optional<::FlexFlow::InitializerAttrs> initializer;
  bool create_gradients;
  std::optional<::FlexFlow::ParamSync> sync_type;
};
} // namespace FlexFlow

namespace std {
template <>
struct hash<FlexFlow::TensorAttrs> {
  size_t operator()(FlexFlow::TensorAttrs const &) const;
};
} // namespace std

namespace nlohmann {
template <>
struct adl_serializer<FlexFlow::TensorAttrs> {
  static FlexFlow::TensorAttrs from_json(json const &);
  static void to_json(json &, FlexFlow::TensorAttrs const &);
};
} // namespace nlohmann

namespace FlexFlow {
std::string format_as(TensorAttrs const &);
std::ostream &operator<<(std::ostream &, TensorAttrs const &);
} // namespace FlexFlow

#endif // _FLEXFLOW_LIB_PCG_INCLUDE_PCG_TENSOR_ATTRS_DTG_H
