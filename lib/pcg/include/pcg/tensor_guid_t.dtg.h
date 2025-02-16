// THIS FILE WAS AUTO-GENERATED BY proj. DO NOT MODIFY IT!
// If you would like to modify this datatype, instead modify
// lib/pcg/include/pcg/tensor_guid_t.struct.toml
/* proj-data
{
  "generated_from": "dc15fcbb876ec70509dfa8b662963bc3"
}
*/

#ifndef _FLEXFLOW_LIB_PCG_INCLUDE_PCG_TENSOR_GUID_T_DTG_H
#define _FLEXFLOW_LIB_PCG_INCLUDE_PCG_TENSOR_GUID_T_DTG_H

#include "fmt/format.h"
#include "utils/graph.h"
#include <functional>
#include <ostream>
#include <tuple>

namespace FlexFlow {
struct tensor_guid_t {
  tensor_guid_t() = delete;
  tensor_guid_t(::FlexFlow::MultiDiOutput const &raw_graph_output);

  bool operator==(tensor_guid_t const &) const;
  bool operator!=(tensor_guid_t const &) const;
  bool operator<(tensor_guid_t const &) const;
  bool operator>(tensor_guid_t const &) const;
  bool operator<=(tensor_guid_t const &) const;
  bool operator>=(tensor_guid_t const &) const;
  ::FlexFlow::MultiDiOutput raw_graph_output;
};
} // namespace FlexFlow

namespace std {
template <>
struct hash<FlexFlow::tensor_guid_t> {
  size_t operator()(FlexFlow::tensor_guid_t const &) const;
};
} // namespace std

namespace FlexFlow {
std::string format_as(tensor_guid_t const &);
std::ostream &operator<<(std::ostream &, tensor_guid_t const &);
} // namespace FlexFlow

#endif // _FLEXFLOW_LIB_PCG_INCLUDE_PCG_TENSOR_GUID_T_DTG_H
