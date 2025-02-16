// THIS FILE WAS AUTO-GENERATED BY proj. DO NOT MODIFY IT!
// If you would like to modify this datatype, instead modify
// lib/op-attrs/include/op-attrs/ops/input_attrs.struct.toml
/* proj-data
{
  "generated_from": "139ea46d57a3c8738b31b17a8c59a0aa"
}
*/

#include "op-attrs/ops/input_attrs.dtg.h"

#include <sstream>

namespace FlexFlow {
bool InputAttrs::operator==(InputAttrs const &other) const {
  return std::tie() == std::tie();
}
bool InputAttrs::operator!=(InputAttrs const &other) const {
  return std::tie() != std::tie();
}
bool InputAttrs::operator<(InputAttrs const &other) const {
  return std::tie() < std::tie();
}
bool InputAttrs::operator>(InputAttrs const &other) const {
  return std::tie() > std::tie();
}
bool InputAttrs::operator<=(InputAttrs const &other) const {
  return std::tie() <= std::tie();
}
bool InputAttrs::operator>=(InputAttrs const &other) const {
  return std::tie() >= std::tie();
}
} // namespace FlexFlow

namespace std {
size_t hash<FlexFlow::InputAttrs>::operator()(
    FlexFlow::InputAttrs const &x) const {
  size_t result = 0;
  return result;
}
} // namespace std

namespace nlohmann {
FlexFlow::InputAttrs
    adl_serializer<FlexFlow::InputAttrs>::from_json(json const &j) {
  return {};
}
void adl_serializer<FlexFlow::InputAttrs>::to_json(
    json &j, FlexFlow::InputAttrs const &v) {
  j["__type"] = "InputAttrs";
}
} // namespace nlohmann

namespace rc {
Gen<FlexFlow::InputAttrs> Arbitrary<FlexFlow::InputAttrs>::arbitrary() {
  return gen::construct<FlexFlow::InputAttrs>();
}
} // namespace rc

namespace FlexFlow {
std::string format_as(InputAttrs const &x) {
  std::ostringstream oss;
  oss << "<InputAttrs";
  oss << ">";
  return oss.str();
}
std::ostream &operator<<(std::ostream &s, InputAttrs const &x) {
  return s << fmt::to_string(x);
}
} // namespace FlexFlow
