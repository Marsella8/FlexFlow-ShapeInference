// THIS FILE WAS AUTO-GENERATED BY proj. DO NOT MODIFY IT!
// If you would like to modify this datatype, instead modify
// lib/op-attrs/include/op-attrs/ops/attention_attrs.struct.toml
/* proj-data
{
  "generated_from": "360324465947562229dc6632a9e9a2f3"
}
*/

#ifndef _FLEXFLOW_LIB_OP_ATTRS_INCLUDE_OP_ATTRS_OPS_ATTENTION_ATTRS_DTG_H
#define _FLEXFLOW_LIB_OP_ATTRS_INCLUDE_OP_ATTRS_OPS_ATTENTION_ATTRS_DTG_H

#include "fmt/format.h"
#include "nlohmann/json.hpp"
#include "rapidcheck.h"
#include <functional>
#include <ostream>
#include <tuple>

namespace FlexFlow {
struct MultiHeadAttentionAttrs {
  MultiHeadAttentionAttrs() = delete;
  MultiHeadAttentionAttrs(int const &embed_dim,
                          int const &num_heads,
                          int const &kdim,
                          int const &vdim,
                          float const &dropout,
                          bool const &bias,
                          bool const &add_bias_kv,
                          bool const &add_zero_attn);

  bool operator==(MultiHeadAttentionAttrs const &) const;
  bool operator!=(MultiHeadAttentionAttrs const &) const;
  bool operator<(MultiHeadAttentionAttrs const &) const;
  bool operator>(MultiHeadAttentionAttrs const &) const;
  bool operator<=(MultiHeadAttentionAttrs const &) const;
  bool operator>=(MultiHeadAttentionAttrs const &) const;
  int embed_dim;
  int num_heads;
  int kdim;
  int vdim;
  float dropout;
  bool bias;
  bool add_bias_kv;
  bool add_zero_attn;
};
} // namespace FlexFlow

namespace std {
template <>
struct hash<FlexFlow::MultiHeadAttentionAttrs> {
  size_t operator()(FlexFlow::MultiHeadAttentionAttrs const &) const;
};
} // namespace std

namespace nlohmann {
template <>
struct adl_serializer<FlexFlow::MultiHeadAttentionAttrs> {
  static FlexFlow::MultiHeadAttentionAttrs from_json(json const &);
  static void to_json(json &, FlexFlow::MultiHeadAttentionAttrs const &);
};
} // namespace nlohmann

namespace rc {
template <>
struct Arbitrary<FlexFlow::MultiHeadAttentionAttrs> {
  static Gen<FlexFlow::MultiHeadAttentionAttrs> arbitrary();
};
} // namespace rc

namespace FlexFlow {
std::string format_as(MultiHeadAttentionAttrs const &);
std::ostream &operator<<(std::ostream &, MultiHeadAttentionAttrs const &);
} // namespace FlexFlow

#endif // _FLEXFLOW_LIB_OP_ATTRS_INCLUDE_OP_ATTRS_OPS_ATTENTION_ATTRS_DTG_H