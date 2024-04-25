// THIS FILE WAS AUTO-GENERATED BY proj. DO NOT MODIFY IT!
// If you would like to modify this datatype, instead modify
// lib/op-attrs/include/op-attrs/param_sync.enum.toml
/* proj-data
{
  "generated_from": "288c6e9e256cf58ba5dbd0e3791c08df"
}
*/

#ifndef _FLEXFLOW_LIB_OP_ATTRS_INCLUDE_OP_ATTRS_PARAM_SYNC_DTG_H
#define _FLEXFLOW_LIB_OP_ATTRS_INCLUDE_OP_ATTRS_PARAM_SYNC_DTG_H

#include "fmt/format.h"
#include "nlohmann/json.hpp"
#include "rapidcheck.h"
#include <functional>
#include <ostream>
#include <string>

namespace FlexFlow {
enum class ParamSync { PS, NCCL };
std::string format_as(ParamSync);
std::ostream &operator<<(std::ostream &, ParamSync);
void to_json(::nlohmann::json &, ParamSync);
void from_json(::nlohmann::json const &, ParamSync &);
} // namespace FlexFlow
namespace std {
template <>
struct hash<FlexFlow::ParamSync> {
  size_t operator()(FlexFlow::ParamSync) const;
};
} // namespace std
namespace rc {
template <>
struct Arbitrary<FlexFlow::ParamSync> {
  static Gen<FlexFlow::ParamSync> arbitrary();
};
} // namespace rc

#endif // _FLEXFLOW_LIB_OP_ATTRS_INCLUDE_OP_ATTRS_PARAM_SYNC_DTG_H