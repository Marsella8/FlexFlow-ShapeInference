// THIS FILE WAS AUTO-GENERATED BY proj. DO NOT MODIFY IT!
// If you would like to modify this datatype, instead modify
// lib/op-attrs/include/op-attrs/activation.enum.toml
/* proj-data
{
  "generated_from": "2b0d2e3e825732838aa5be99f2f0e6df"
}
*/

#ifndef _FLEXFLOW_LIB_OP_ATTRS_INCLUDE_OP_ATTRS_ACTIVATION_DTG_H
#define _FLEXFLOW_LIB_OP_ATTRS_INCLUDE_OP_ATTRS_ACTIVATION_DTG_H

#include "fmt/format.h"
#include "nlohmann/json.hpp"
#include "rapidcheck.h"
#include <functional>
#include <ostream>
#include <string>

namespace FlexFlow {
enum class Activation { RELU, SIGMOID, TANH, GELU };
std::string format_as(Activation);
std::ostream &operator<<(std::ostream &, Activation);
void to_json(::nlohmann::json &, Activation);
void from_json(::nlohmann::json const &, Activation &);
} // namespace FlexFlow
namespace std {
template <>
struct hash<FlexFlow::Activation> {
  size_t operator()(FlexFlow::Activation) const;
};
} // namespace std
namespace rc {
template <>
struct Arbitrary<FlexFlow::Activation> {
  static Gen<FlexFlow::Activation> arbitrary();
};
} // namespace rc

#endif // _FLEXFLOW_LIB_OP_ATTRS_INCLUDE_OP_ATTRS_ACTIVATION_DTG_H
