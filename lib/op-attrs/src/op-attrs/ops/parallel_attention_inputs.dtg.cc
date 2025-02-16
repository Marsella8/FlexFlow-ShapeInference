// THIS FILE WAS AUTO-GENERATED BY proj. DO NOT MODIFY IT!
// If you would like to modify this datatype, instead modify
// lib/op-attrs/include/op-attrs/ops/parallel_attention_inputs.struct.toml
/* proj-data
{
  "generated_from": "8d1e2a2d3852bfb59d8668d14d52c958"
}
*/

#include "op-attrs/ops/parallel_attention_inputs.dtg.h"

#include "op-attrs/parallel_tensor_shape.h"
#include <sstream>

namespace FlexFlow {
ParallelMultiHeadAttentionInputs::ParallelMultiHeadAttentionInputs(
    ::FlexFlow::ParallelTensorShape const &query,
    ::FlexFlow::ParallelTensorShape const &key,
    ::FlexFlow::ParallelTensorShape const &value)
    : query(query), key(key), value(value) {}
bool ParallelMultiHeadAttentionInputs::operator==(
    ParallelMultiHeadAttentionInputs const &other) const {
  return std::tie(this->query, this->key, this->value) ==
         std::tie(other.query, other.key, other.value);
}
bool ParallelMultiHeadAttentionInputs::operator!=(
    ParallelMultiHeadAttentionInputs const &other) const {
  return std::tie(this->query, this->key, this->value) !=
         std::tie(other.query, other.key, other.value);
}
} // namespace FlexFlow

namespace std {
size_t hash<FlexFlow::ParallelMultiHeadAttentionInputs>::operator()(
    FlexFlow::ParallelMultiHeadAttentionInputs const &x) const {
  size_t result = 0;
  result ^= std::hash<::FlexFlow::ParallelTensorShape>{}(x.query) + 0x9e3779b9 +
            (result << 6) + (result >> 2);
  result ^= std::hash<::FlexFlow::ParallelTensorShape>{}(x.key) + 0x9e3779b9 +
            (result << 6) + (result >> 2);
  result ^= std::hash<::FlexFlow::ParallelTensorShape>{}(x.value) + 0x9e3779b9 +
            (result << 6) + (result >> 2);
  return result;
}
} // namespace std

namespace nlohmann {
FlexFlow::ParallelMultiHeadAttentionInputs
    adl_serializer<FlexFlow::ParallelMultiHeadAttentionInputs>::from_json(
        json const &j) {
  return {j.at("query").template get<::FlexFlow::ParallelTensorShape>(),
          j.at("key").template get<::FlexFlow::ParallelTensorShape>(),
          j.at("value").template get<::FlexFlow::ParallelTensorShape>()};
}
void adl_serializer<FlexFlow::ParallelMultiHeadAttentionInputs>::to_json(
    json &j, FlexFlow::ParallelMultiHeadAttentionInputs const &v) {
  j["__type"] = "ParallelMultiHeadAttentionInputs";
  j["query"] = v.query;
  j["key"] = v.key;
  j["value"] = v.value;
}
} // namespace nlohmann

namespace FlexFlow {
std::string format_as(ParallelMultiHeadAttentionInputs const &x) {
  std::ostringstream oss;
  oss << "<ParallelMultiHeadAttentionInputs";
  oss << " query=" << x.query;
  oss << " key=" << x.key;
  oss << " value=" << x.value;
  oss << ">";
  return oss.str();
}
std::ostream &operator<<(std::ostream &s,
                         ParallelMultiHeadAttentionInputs const &x) {
  return s << fmt::to_string(x);
}
} // namespace FlexFlow
