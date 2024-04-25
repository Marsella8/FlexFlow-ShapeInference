// THIS FILE WAS AUTO-GENERATED BY proj. DO NOT MODIFY IT!
// If you would like to modify this datatype, instead modify
// lib/op-attrs/include/op-attrs/ops/reverse_attrs.struct.toml
/* proj-data
{
  "generated_from": "7c21c4192854f5981018abf4fbdd9ead"
}
*/

#include "op-attrs/ops/reverse_attrs.dtg.h"

#include "op-attrs/ff_dim.dtg.h"
#include <sstream>

namespace FlexFlow {
ReverseAttrs::ReverseAttrs(::FlexFlow::ff_dim_t const &axis) : axis(axis) {}
bool ReverseAttrs::operator==(ReverseAttrs const &other) const {
  return std::tie(this->axis) == std::tie(other.axis);
}
bool ReverseAttrs::operator!=(ReverseAttrs const &other) const {
  return std::tie(this->axis) != std::tie(other.axis);
}
bool ReverseAttrs::operator<(ReverseAttrs const &other) const {
  return std::tie(this->axis) < std::tie(other.axis);
}
bool ReverseAttrs::operator>(ReverseAttrs const &other) const {
  return std::tie(this->axis) > std::tie(other.axis);
}
bool ReverseAttrs::operator<=(ReverseAttrs const &other) const {
  return std::tie(this->axis) <= std::tie(other.axis);
}
bool ReverseAttrs::operator>=(ReverseAttrs const &other) const {
  return std::tie(this->axis) >= std::tie(other.axis);
}
} // namespace FlexFlow

namespace std {
size_t hash<FlexFlow::ReverseAttrs>::operator()(
    FlexFlow::ReverseAttrs const &x) const {
  size_t result = 0;
  result ^= std::hash<::FlexFlow::ff_dim_t>{}(x.axis) + 0x9e3779b9 +
            (result << 6) + (result >> 2);
  return result;
}
} // namespace std

namespace nlohmann {
FlexFlow::ReverseAttrs
    adl_serializer<FlexFlow::ReverseAttrs>::from_json(json const &j) {
  return {j.at("axis").template get<::FlexFlow::ff_dim_t>()};
}
void adl_serializer<FlexFlow::ReverseAttrs>::to_json(
    json &j, FlexFlow::ReverseAttrs const &v) {
  j["__type"] = "ReverseAttrs";
  j["axis"] = v.axis;
}
} // namespace nlohmann

namespace FlexFlow {
std::string format_as(ReverseAttrs const &x) {
  std::ostringstream oss;
  oss << "<ReverseAttrs";
  oss << " axis=" << x.axis;
  oss << ">";
  return oss.str();
}
std::ostream &operator<<(std::ostream &s, ReverseAttrs const &x) {
  return s << fmt::to_string(x);
}
} // namespace FlexFlow