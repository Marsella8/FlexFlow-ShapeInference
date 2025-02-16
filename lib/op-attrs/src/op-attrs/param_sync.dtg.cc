// THIS FILE WAS AUTO-GENERATED BY proj. DO NOT MODIFY IT!
// If you would like to modify this datatype, instead modify
// lib/op-attrs/include/op-attrs/param_sync.enum.toml
/* proj-data
{
  "generated_from": "288c6e9e256cf58ba5dbd0e3791c08df"
}
*/

#include "op-attrs/param_sync.dtg.h"

#include <sstream>
#include <stdexcept>

namespace std {
size_t hash<FlexFlow::ParamSync>::operator()(FlexFlow::ParamSync x) const {
  return std::hash<int>{}(static_cast<int>(x));
}
} // namespace std
namespace FlexFlow {
std::string format_as(ParamSync x) {
  switch (x) {
    case ParamSync::PS:
      return "PS";
    case ParamSync::NCCL:
      return "NCCL";
    default:
      std::ostringstream oss;
      oss << "Unknown ParamSync value " << static_cast<int>(x);
      throw std::runtime_error(oss.str());
  }
}
std::ostream &operator<<(std::ostream &s, ParamSync x) {
  return s << fmt::to_string(x);
}
} // namespace FlexFlow
namespace FlexFlow {
void to_json(::nlohmann::json &j, ParamSync x) {
  switch (x) {
    case ParamSync::PS:
      j = "PS";
      break;
    case ParamSync::NCCL:
      j = "NCCL";
      break;
    default:
      std::ostringstream oss;
      oss << "Unknown ParamSync value " << static_cast<int>(x);
      throw std::runtime_error(oss.str());
  }
}
void from_json(::nlohmann::json const &j, ParamSync &x) {
  std::string as_str = j.get<std::string>();
  if (as_str == "PS") {
    x = ParamSync::PS;
  } else if (as_str == "NCCL") {
    x = ParamSync::NCCL;
  } else {
    std::ostringstream oss;
    oss << "Unknown ParamSync value " << as_str;
    throw std::runtime_error(oss.str());
  }
}
} // namespace FlexFlow
namespace rc {
Gen<FlexFlow::ParamSync> Arbitrary<FlexFlow::ParamSync>::arbitrary() {
  return gen::element<FlexFlow::ParamSync>(FlexFlow::ParamSync::PS,
                                           FlexFlow::ParamSync::NCCL);
}
} // namespace rc
