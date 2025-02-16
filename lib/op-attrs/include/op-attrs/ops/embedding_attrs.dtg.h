// THIS FILE WAS AUTO-GENERATED BY proj. DO NOT MODIFY IT!
// If you would like to modify this datatype, instead modify
// lib/op-attrs/include/op-attrs/ops/embedding_attrs.struct.toml
/* proj-data
{
  "generated_from": "65af6a38dfabebbc05c8ad3f75397b07"
}
*/

#ifndef _FLEXFLOW_LIB_OP_ATTRS_INCLUDE_OP_ATTRS_OPS_EMBEDDING_ATTRS_DTG_H
#define _FLEXFLOW_LIB_OP_ATTRS_INCLUDE_OP_ATTRS_OPS_EMBEDDING_ATTRS_DTG_H

#include "fmt/format.h"
#include "nlohmann/json.hpp"
#include "op-attrs/aggregate_op.dtg.h"
#include "op-attrs/datatype.dtg.h"
#include "utils/stack_vector.h"
#include <functional>
#include <ostream>
#include <tuple>

namespace FlexFlow {
struct EmbeddingAttrs {
  EmbeddingAttrs() = delete;
  EmbeddingAttrs(int const &num_entries,
                 int const &out_channels,
                 ::FlexFlow::AggregateOp const &aggr,
                 ::FlexFlow::DataType const &data_type);

  bool operator==(EmbeddingAttrs const &) const;
  bool operator!=(EmbeddingAttrs const &) const;
  bool operator<(EmbeddingAttrs const &) const;
  bool operator>(EmbeddingAttrs const &) const;
  bool operator<=(EmbeddingAttrs const &) const;
  bool operator>=(EmbeddingAttrs const &) const;
  int num_entries;
  int out_channels;
  ::FlexFlow::AggregateOp aggr;
  ::FlexFlow::DataType data_type;
};
} // namespace FlexFlow

namespace std {
template <>
struct hash<FlexFlow::EmbeddingAttrs> {
  size_t operator()(FlexFlow::EmbeddingAttrs const &) const;
};
} // namespace std

namespace nlohmann {
template <>
struct adl_serializer<FlexFlow::EmbeddingAttrs> {
  static FlexFlow::EmbeddingAttrs from_json(json const &);
  static void to_json(json &, FlexFlow::EmbeddingAttrs const &);
};
} // namespace nlohmann

namespace FlexFlow {
std::string format_as(EmbeddingAttrs const &);
std::ostream &operator<<(std::ostream &, EmbeddingAttrs const &);
} // namespace FlexFlow

#endif // _FLEXFLOW_LIB_OP_ATTRS_INCLUDE_OP_ATTRS_OPS_EMBEDDING_ATTRS_DTG_H
