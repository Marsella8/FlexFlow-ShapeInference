// THIS FILE WAS AUTO-GENERATED BY proj. DO NOT MODIFY IT!
// If you would like to modify this datatype, instead modify
// lib/pcg/include/pcg/num_points_t.struct.toml
/* proj-data
{
  "generated_from": "2a862b92055eda0508447d2f4df52f71"
}
*/

#ifndef _FLEXFLOW_LIB_PCG_INCLUDE_PCG_NUM_POINTS_T_DTG_H
#define _FLEXFLOW_LIB_PCG_INCLUDE_PCG_NUM_POINTS_T_DTG_H

#include "fmt/format.h"
#include "nlohmann/json.hpp"
#include "rapidcheck.h"
#include <functional>
#include <ostream>
#include <tuple>

namespace FlexFlow {
struct num_points_t {
  num_points_t() = delete;
  num_points_t(int const &unwrapped);

  bool operator==(num_points_t const &) const;
  bool operator!=(num_points_t const &) const;
  bool operator<(num_points_t const &) const;
  bool operator>(num_points_t const &) const;
  bool operator<=(num_points_t const &) const;
  bool operator>=(num_points_t const &) const;
  int unwrapped;
};
} // namespace FlexFlow

namespace std {
template <>
struct hash<FlexFlow::num_points_t> {
  size_t operator()(FlexFlow::num_points_t const &) const;
};
} // namespace std

namespace nlohmann {
template <>
struct adl_serializer<FlexFlow::num_points_t> {
  static FlexFlow::num_points_t from_json(json const &);
  static void to_json(json &, FlexFlow::num_points_t const &);
};
} // namespace nlohmann

namespace rc {
template <>
struct Arbitrary<FlexFlow::num_points_t> {
  static Gen<FlexFlow::num_points_t> arbitrary();
};
} // namespace rc

namespace FlexFlow {
std::string format_as(num_points_t const &);
std::ostream &operator<<(std::ostream &, num_points_t const &);
} // namespace FlexFlow

#endif // _FLEXFLOW_LIB_PCG_INCLUDE_PCG_NUM_POINTS_T_DTG_H
