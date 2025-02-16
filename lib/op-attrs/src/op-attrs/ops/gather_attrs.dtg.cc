// THIS FILE WAS AUTO-GENERATED BY proj. DO NOT MODIFY IT!
// If you would like to modify this datatype, instead modify
// lib/op-attrs/include/op-attrs/ops/gather_attrs.struct.toml
/* proj-data
{
  "generated_from": "ee735644d3c5f53f790e0a1fa8b8beaf"
}
*/

#include "op-attrs/ops/gather_attrs.dtg.h"

#include "op-attrs/ff_dim.dtg.h"
#include <sstream>

namespace FlexFlow {
GatherAttrs::GatherAttrs(::FlexFlow::ff_dim_t const &dim) : dim(dim) {}
bool GatherAttrs::operator==(GatherAttrs const &other) const {
  return std::tie(this->dim) == std::tie(other.dim);
}
bool GatherAttrs::operator!=(GatherAttrs const &other) const {
  return std::tie(this->dim) != std::tie(other.dim);
}
bool GatherAttrs::operator<(GatherAttrs const &other) const {
  return std::tie(this->dim) < std::tie(other.dim);
}
bool GatherAttrs::operator>(GatherAttrs const &other) const {
  return std::tie(this->dim) > std::tie(other.dim);
}
bool GatherAttrs::operator<=(GatherAttrs const &other) const {
  return std::tie(this->dim) <= std::tie(other.dim);
}
bool GatherAttrs::operator>=(GatherAttrs const &other) const {
  return std::tie(this->dim) >= std::tie(other.dim);
}
} // namespace FlexFlow

namespace std {
size_t hash<FlexFlow::GatherAttrs>::operator()(
    FlexFlow::GatherAttrs const &x) const {
  size_t result = 0;
  result ^= std::hash<::FlexFlow::ff_dim_t>{}(x.dim) + 0x9e3779b9 +
            (result << 6) + (result >> 2);
  return result;
}
} // namespace std

namespace nlohmann {
FlexFlow::GatherAttrs
    adl_serializer<FlexFlow::GatherAttrs>::from_json(json const &j) {
  return {j.at("dim").template get<::FlexFlow::ff_dim_t>()};
}
void adl_serializer<FlexFlow::GatherAttrs>::to_json(
    json &j, FlexFlow::GatherAttrs const &v) {
  j["__type"] = "GatherAttrs";
  j["dim"] = v.dim;
}
} // namespace nlohmann

namespace FlexFlow {
std::string format_as(GatherAttrs const &x) {
  std::ostringstream oss;
  oss << "<GatherAttrs";
  oss << " dim=" << x.dim;
  oss << ">";
  return oss.str();
}
std::ostream &operator<<(std::ostream &s, GatherAttrs const &x) {
  return s << fmt::to_string(x);
}
} // namespace FlexFlow
