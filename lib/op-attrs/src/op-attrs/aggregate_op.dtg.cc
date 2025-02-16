// THIS FILE WAS AUTO-GENERATED BY proj. DO NOT MODIFY IT!
// If you would like to modify this datatype, instead modify
// lib/op-attrs/include/op-attrs/aggregate_op.enum.toml
/* proj-data
{
  "generated_from": "441fe9b0bb8f2dc2b31f74c58320ef30"
}
*/

#include "op-attrs/aggregate_op.dtg.h"

#include <sstream>
#include <stdexcept>

namespace std {
size_t hash<FlexFlow::AggregateOp>::operator()(FlexFlow::AggregateOp x) const {
  return std::hash<int>{}(static_cast<int>(x));
}
} // namespace std
namespace FlexFlow {
std::string format_as(AggregateOp x) {
  switch (x) {
    case AggregateOp::SUM:
      return "SUM";
    default:
      std::ostringstream oss;
      oss << "Unknown AggregateOp value " << static_cast<int>(x);
      throw std::runtime_error(oss.str());
  }
}
std::ostream &operator<<(std::ostream &s, AggregateOp x) {
  return s << fmt::to_string(x);
}
} // namespace FlexFlow
namespace FlexFlow {
void to_json(::nlohmann::json &j, AggregateOp x) {
  switch (x) {
    case AggregateOp::SUM:
      j = "SUM";
      break;
    default:
      std::ostringstream oss;
      oss << "Unknown AggregateOp value " << static_cast<int>(x);
      throw std::runtime_error(oss.str());
  }
}
void from_json(::nlohmann::json const &j, AggregateOp &x) {
  std::string as_str = j.get<std::string>();
  if (as_str == "SUM") {
    x = AggregateOp::SUM;
  } else {
    std::ostringstream oss;
    oss << "Unknown AggregateOp value " << as_str;
    throw std::runtime_error(oss.str());
  }
}
} // namespace FlexFlow
namespace rc {
Gen<FlexFlow::AggregateOp> Arbitrary<FlexFlow::AggregateOp>::arbitrary() {
  return gen::element<FlexFlow::AggregateOp>(FlexFlow::AggregateOp::SUM);
}
} // namespace rc
