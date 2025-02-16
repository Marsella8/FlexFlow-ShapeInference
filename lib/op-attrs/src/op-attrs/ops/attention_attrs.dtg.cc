// THIS FILE WAS AUTO-GENERATED BY proj. DO NOT MODIFY IT!
// If you would like to modify this datatype, instead modify
// lib/op-attrs/include/op-attrs/ops/attention_attrs.struct.toml
/* proj-data
{
  "generated_from": "360324465947562229dc6632a9e9a2f3"
}
*/

#include "op-attrs/ops/attention_attrs.dtg.h"

#include <sstream>

namespace FlexFlow {
MultiHeadAttentionAttrs::MultiHeadAttentionAttrs(int const &embed_dim,
                                                 int const &num_heads,
                                                 int const &kdim,
                                                 int const &vdim,
                                                 float const &dropout,
                                                 bool const &bias,
                                                 bool const &add_bias_kv,
                                                 bool const &add_zero_attn)
    : embed_dim(embed_dim), num_heads(num_heads), kdim(kdim), vdim(vdim),
      dropout(dropout), bias(bias), add_bias_kv(add_bias_kv),
      add_zero_attn(add_zero_attn) {}
bool MultiHeadAttentionAttrs::operator==(
    MultiHeadAttentionAttrs const &other) const {
  return std::tie(this->embed_dim,
                  this->num_heads,
                  this->kdim,
                  this->vdim,
                  this->dropout,
                  this->bias,
                  this->add_bias_kv,
                  this->add_zero_attn) == std::tie(other.embed_dim,
                                                   other.num_heads,
                                                   other.kdim,
                                                   other.vdim,
                                                   other.dropout,
                                                   other.bias,
                                                   other.add_bias_kv,
                                                   other.add_zero_attn);
}
bool MultiHeadAttentionAttrs::operator!=(
    MultiHeadAttentionAttrs const &other) const {
  return std::tie(this->embed_dim,
                  this->num_heads,
                  this->kdim,
                  this->vdim,
                  this->dropout,
                  this->bias,
                  this->add_bias_kv,
                  this->add_zero_attn) != std::tie(other.embed_dim,
                                                   other.num_heads,
                                                   other.kdim,
                                                   other.vdim,
                                                   other.dropout,
                                                   other.bias,
                                                   other.add_bias_kv,
                                                   other.add_zero_attn);
}
bool MultiHeadAttentionAttrs::operator<(
    MultiHeadAttentionAttrs const &other) const {
  return std::tie(this->embed_dim,
                  this->num_heads,
                  this->kdim,
                  this->vdim,
                  this->dropout,
                  this->bias,
                  this->add_bias_kv,
                  this->add_zero_attn) < std::tie(other.embed_dim,
                                                  other.num_heads,
                                                  other.kdim,
                                                  other.vdim,
                                                  other.dropout,
                                                  other.bias,
                                                  other.add_bias_kv,
                                                  other.add_zero_attn);
}
bool MultiHeadAttentionAttrs::operator>(
    MultiHeadAttentionAttrs const &other) const {
  return std::tie(this->embed_dim,
                  this->num_heads,
                  this->kdim,
                  this->vdim,
                  this->dropout,
                  this->bias,
                  this->add_bias_kv,
                  this->add_zero_attn) > std::tie(other.embed_dim,
                                                  other.num_heads,
                                                  other.kdim,
                                                  other.vdim,
                                                  other.dropout,
                                                  other.bias,
                                                  other.add_bias_kv,
                                                  other.add_zero_attn);
}
bool MultiHeadAttentionAttrs::operator<=(
    MultiHeadAttentionAttrs const &other) const {
  return std::tie(this->embed_dim,
                  this->num_heads,
                  this->kdim,
                  this->vdim,
                  this->dropout,
                  this->bias,
                  this->add_bias_kv,
                  this->add_zero_attn) <= std::tie(other.embed_dim,
                                                   other.num_heads,
                                                   other.kdim,
                                                   other.vdim,
                                                   other.dropout,
                                                   other.bias,
                                                   other.add_bias_kv,
                                                   other.add_zero_attn);
}
bool MultiHeadAttentionAttrs::operator>=(
    MultiHeadAttentionAttrs const &other) const {
  return std::tie(this->embed_dim,
                  this->num_heads,
                  this->kdim,
                  this->vdim,
                  this->dropout,
                  this->bias,
                  this->add_bias_kv,
                  this->add_zero_attn) >= std::tie(other.embed_dim,
                                                   other.num_heads,
                                                   other.kdim,
                                                   other.vdim,
                                                   other.dropout,
                                                   other.bias,
                                                   other.add_bias_kv,
                                                   other.add_zero_attn);
}
} // namespace FlexFlow

namespace std {
size_t hash<FlexFlow::MultiHeadAttentionAttrs>::operator()(
    FlexFlow::MultiHeadAttentionAttrs const &x) const {
  size_t result = 0;
  result ^= std::hash<int>{}(x.embed_dim) + 0x9e3779b9 + (result << 6) +
            (result >> 2);
  result ^= std::hash<int>{}(x.num_heads) + 0x9e3779b9 + (result << 6) +
            (result >> 2);
  result ^=
      std::hash<int>{}(x.kdim) + 0x9e3779b9 + (result << 6) + (result >> 2);
  result ^=
      std::hash<int>{}(x.vdim) + 0x9e3779b9 + (result << 6) + (result >> 2);
  result ^= std::hash<float>{}(x.dropout) + 0x9e3779b9 + (result << 6) +
            (result >> 2);
  result ^=
      std::hash<bool>{}(x.bias) + 0x9e3779b9 + (result << 6) + (result >> 2);
  result ^= std::hash<bool>{}(x.add_bias_kv) + 0x9e3779b9 + (result << 6) +
            (result >> 2);
  result ^= std::hash<bool>{}(x.add_zero_attn) + 0x9e3779b9 + (result << 6) +
            (result >> 2);
  return result;
}
} // namespace std

namespace nlohmann {
FlexFlow::MultiHeadAttentionAttrs
    adl_serializer<FlexFlow::MultiHeadAttentionAttrs>::from_json(
        json const &j) {
  return {j.at("embed_dim").template get<int>(),
          j.at("num_heads").template get<int>(),
          j.at("kdim").template get<int>(),
          j.at("vdim").template get<int>(),
          j.at("dropout").template get<float>(),
          j.at("bias").template get<bool>(),
          j.at("add_bias_kv").template get<bool>(),
          j.at("add_zero_attn").template get<bool>()};
}
void adl_serializer<FlexFlow::MultiHeadAttentionAttrs>::to_json(
    json &j, FlexFlow::MultiHeadAttentionAttrs const &v) {
  j["__type"] = "MultiHeadAttentionAttrs";
  j["embed_dim"] = v.embed_dim;
  j["num_heads"] = v.num_heads;
  j["kdim"] = v.kdim;
  j["vdim"] = v.vdim;
  j["dropout"] = v.dropout;
  j["bias"] = v.bias;
  j["add_bias_kv"] = v.add_bias_kv;
  j["add_zero_attn"] = v.add_zero_attn;
}
} // namespace nlohmann

namespace rc {
Gen<FlexFlow::MultiHeadAttentionAttrs>
    Arbitrary<FlexFlow::MultiHeadAttentionAttrs>::arbitrary() {
  return gen::construct<FlexFlow::MultiHeadAttentionAttrs>(
      gen::arbitrary<int>(),
      gen::arbitrary<int>(),
      gen::arbitrary<int>(),
      gen::arbitrary<int>(),
      gen::arbitrary<float>(),
      gen::arbitrary<bool>(),
      gen::arbitrary<bool>(),
      gen::arbitrary<bool>());
}
} // namespace rc

namespace FlexFlow {
std::string format_as(MultiHeadAttentionAttrs const &x) {
  std::ostringstream oss;
  oss << "<MultiHeadAttentionAttrs";
  oss << " embed_dim=" << x.embed_dim;
  oss << " num_heads=" << x.num_heads;
  oss << " kdim=" << x.kdim;
  oss << " vdim=" << x.vdim;
  oss << " dropout=" << x.dropout;
  oss << " bias=" << x.bias;
  oss << " add_bias_kv=" << x.add_bias_kv;
  oss << " add_zero_attn=" << x.add_zero_attn;
  oss << ">";
  return oss.str();
}
std::ostream &operator<<(std::ostream &s, MultiHeadAttentionAttrs const &x) {
  return s << fmt::to_string(x);
}
} // namespace FlexFlow
