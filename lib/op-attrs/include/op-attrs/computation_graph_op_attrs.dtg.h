// THIS FILE WAS AUTO-GENERATED BY proj. DO NOT MODIFY IT!
// If you would like to modify this datatype, instead modify
// lib/op-attrs/include/op-attrs/computation_graph_op_attrs.variant.toml
/* proj-data
{
  "generated_from": "dc1445fed47c2acaed22038975eec627"
}
*/

#ifndef _FLEXFLOW_LIB_OP_ATTRS_INCLUDE_OP_ATTRS_COMPUTATION_GRAPH_OP_ATTRS_DTG_H
#define _FLEXFLOW_LIB_OP_ATTRS_INCLUDE_OP_ATTRS_COMPUTATION_GRAPH_OP_ATTRS_DTG_H

#include "fmt/format.h"
#include "nlohmann/json.hpp"
#include "op-attrs/ops/attention_attrs.dtg.h"
#include "op-attrs/ops/batch_matmul.dtg.h"
#include "op-attrs/ops/batch_norm_attrs.dtg.h"
#include "op-attrs/ops/broadcast.dtg.h"
#include "op-attrs/ops/cast_attrs.dtg.h"
#include "op-attrs/ops/concat_attrs.dtg.h"
#include "op-attrs/ops/conv_2d_attrs.dtg.h"
#include "op-attrs/ops/dropout_attrs.dtg.h"
#include "op-attrs/ops/element_binary_attrs.dtg.h"
#include "op-attrs/ops/element_scalar_unary_attrs.dtg.h"
#include "op-attrs/ops/element_unary_attrs.dtg.h"
#include "op-attrs/ops/embedding_attrs.dtg.h"
#include "op-attrs/ops/flat_attrs.dtg.h"
#include "op-attrs/ops/gather_attrs.dtg.h"
#include "op-attrs/ops/input_attrs.dtg.h"
#include "op-attrs/ops/layer_norm_attrs.dtg.h"
#include "op-attrs/ops/linear_attrs.dtg.h"
#include "op-attrs/ops/noop_attrs.dtg.h"
#include "op-attrs/ops/pool_2d_attrs.dtg.h"
#include "op-attrs/ops/reduce_attrs.dtg.h"
#include "op-attrs/ops/reshape_attrs.dtg.h"
#include "op-attrs/ops/reverse_attrs.dtg.h"
#include "op-attrs/ops/softmax_attrs.dtg.h"
#include "op-attrs/ops/split_attrs.dtg.h"
#include "op-attrs/ops/topk_attrs.dtg.h"
#include "op-attrs/ops/transpose_attrs.dtg.h"
#include "op-attrs/ops/weight_attrs.dtg.h"
#include <cstddef>
#include <functional>
#include <ostream>
#include <type_traits>
#include <variant>

namespace FlexFlow {
struct ComputationGraphOpAttrs {
  ComputationGraphOpAttrs() = delete;
  explicit ComputationGraphOpAttrs(::FlexFlow::BatchMatmulAttrs const &);
  explicit ComputationGraphOpAttrs(::FlexFlow::BatchNormAttrs const &);
  explicit ComputationGraphOpAttrs(::FlexFlow::BroadcastAttrs const &);
  explicit ComputationGraphOpAttrs(::FlexFlow::CastAttrs const &);
  explicit ComputationGraphOpAttrs(::FlexFlow::ConcatAttrs const &);
  explicit ComputationGraphOpAttrs(::FlexFlow::Conv2DAttrs const &);
  explicit ComputationGraphOpAttrs(::FlexFlow::DropoutAttrs const &);
  explicit ComputationGraphOpAttrs(::FlexFlow::ElementBinaryAttrs const &);
  explicit ComputationGraphOpAttrs(::FlexFlow::ElementUnaryAttrs const &);
  explicit ComputationGraphOpAttrs(::FlexFlow::ElementScalarUnaryAttrs const &);
  explicit ComputationGraphOpAttrs(::FlexFlow::EmbeddingAttrs const &);
  explicit ComputationGraphOpAttrs(::FlexFlow::FlatAttrs const &);
  explicit ComputationGraphOpAttrs(::FlexFlow::GatherAttrs const &);
  explicit ComputationGraphOpAttrs(::FlexFlow::InputAttrs const &);
  explicit ComputationGraphOpAttrs(::FlexFlow::LayerNormAttrs const &);
  explicit ComputationGraphOpAttrs(::FlexFlow::LinearAttrs const &);
  explicit ComputationGraphOpAttrs(::FlexFlow::MultiHeadAttentionAttrs const &);
  explicit ComputationGraphOpAttrs(::FlexFlow::NoopAttrs const &);
  explicit ComputationGraphOpAttrs(::FlexFlow::Pool2DAttrs const &);
  explicit ComputationGraphOpAttrs(::FlexFlow::ReduceAttrs const &);
  explicit ComputationGraphOpAttrs(::FlexFlow::ReverseAttrs const &);
  explicit ComputationGraphOpAttrs(::FlexFlow::ReshapeAttrs const &);
  explicit ComputationGraphOpAttrs(::FlexFlow::SplitAttrs const &);
  explicit ComputationGraphOpAttrs(::FlexFlow::SoftmaxAttrs const &);
  explicit ComputationGraphOpAttrs(::FlexFlow::TopKAttrs const &);
  explicit ComputationGraphOpAttrs(::FlexFlow::TransposeAttrs const &);
  explicit ComputationGraphOpAttrs(::FlexFlow::WeightAttrs const &);
  template <typename T>
  static constexpr bool IsPartOfComputationGraphOpAttrs_v =
      std::is_same_v<T, ::FlexFlow::BatchMatmulAttrs> ||
      std::is_same_v<T, ::FlexFlow::BatchNormAttrs> ||
      std::is_same_v<T, ::FlexFlow::BroadcastAttrs> ||
      std::is_same_v<T, ::FlexFlow::CastAttrs> ||
      std::is_same_v<T, ::FlexFlow::ConcatAttrs> ||
      std::is_same_v<T, ::FlexFlow::Conv2DAttrs> ||
      std::is_same_v<T, ::FlexFlow::DropoutAttrs> ||
      std::is_same_v<T, ::FlexFlow::ElementBinaryAttrs> ||
      std::is_same_v<T, ::FlexFlow::ElementUnaryAttrs> ||
      std::is_same_v<T, ::FlexFlow::ElementScalarUnaryAttrs> ||
      std::is_same_v<T, ::FlexFlow::EmbeddingAttrs> ||
      std::is_same_v<T, ::FlexFlow::FlatAttrs> ||
      std::is_same_v<T, ::FlexFlow::GatherAttrs> ||
      std::is_same_v<T, ::FlexFlow::InputAttrs> ||
      std::is_same_v<T, ::FlexFlow::LayerNormAttrs> ||
      std::is_same_v<T, ::FlexFlow::LinearAttrs> ||
      std::is_same_v<T, ::FlexFlow::MultiHeadAttentionAttrs> ||
      std::is_same_v<T, ::FlexFlow::NoopAttrs> ||
      std::is_same_v<T, ::FlexFlow::Pool2DAttrs> ||
      std::is_same_v<T, ::FlexFlow::ReduceAttrs> ||
      std::is_same_v<T, ::FlexFlow::ReverseAttrs> ||
      std::is_same_v<T, ::FlexFlow::ReshapeAttrs> ||
      std::is_same_v<T, ::FlexFlow::SplitAttrs> ||
      std::is_same_v<T, ::FlexFlow::SoftmaxAttrs> ||
      std::is_same_v<T, ::FlexFlow::TopKAttrs> ||
      std::is_same_v<T, ::FlexFlow::TransposeAttrs> ||
      std::is_same_v<T, ::FlexFlow::WeightAttrs>;
  template <typename ReturnType, typename Visitor>
  ReturnType visit(Visitor &&v) const {
    switch (this->index()) {
      case 0: {
        ReturnType result = v(this->get<::FlexFlow::BatchMatmulAttrs>());
        return result;
      }
      case 1: {
        ReturnType result = v(this->get<::FlexFlow::BatchNormAttrs>());
        return result;
      }
      case 2: {
        ReturnType result = v(this->get<::FlexFlow::BroadcastAttrs>());
        return result;
      }
      case 3: {
        ReturnType result = v(this->get<::FlexFlow::CastAttrs>());
        return result;
      }
      case 4: {
        ReturnType result = v(this->get<::FlexFlow::ConcatAttrs>());
        return result;
      }
      case 5: {
        ReturnType result = v(this->get<::FlexFlow::Conv2DAttrs>());
        return result;
      }
      case 6: {
        ReturnType result = v(this->get<::FlexFlow::DropoutAttrs>());
        return result;
      }
      case 7: {
        ReturnType result = v(this->get<::FlexFlow::ElementBinaryAttrs>());
        return result;
      }
      case 8: {
        ReturnType result = v(this->get<::FlexFlow::ElementUnaryAttrs>());
        return result;
      }
      case 9: {
        ReturnType result = v(this->get<::FlexFlow::ElementScalarUnaryAttrs>());
        return result;
      }
      case 10: {
        ReturnType result = v(this->get<::FlexFlow::EmbeddingAttrs>());
        return result;
      }
      case 11: {
        ReturnType result = v(this->get<::FlexFlow::FlatAttrs>());
        return result;
      }
      case 12: {
        ReturnType result = v(this->get<::FlexFlow::GatherAttrs>());
        return result;
      }
      case 13: {
        ReturnType result = v(this->get<::FlexFlow::InputAttrs>());
        return result;
      }
      case 14: {
        ReturnType result = v(this->get<::FlexFlow::LayerNormAttrs>());
        return result;
      }
      case 15: {
        ReturnType result = v(this->get<::FlexFlow::LinearAttrs>());
        return result;
      }
      case 16: {
        ReturnType result = v(this->get<::FlexFlow::MultiHeadAttentionAttrs>());
        return result;
      }
      case 17: {
        ReturnType result = v(this->get<::FlexFlow::NoopAttrs>());
        return result;
      }
      case 18: {
        ReturnType result = v(this->get<::FlexFlow::Pool2DAttrs>());
        return result;
      }
      case 19: {
        ReturnType result = v(this->get<::FlexFlow::ReduceAttrs>());
        return result;
      }
      case 20: {
        ReturnType result = v(this->get<::FlexFlow::ReverseAttrs>());
        return result;
      }
      case 21: {
        ReturnType result = v(this->get<::FlexFlow::ReshapeAttrs>());
        return result;
      }
      case 22: {
        ReturnType result = v(this->get<::FlexFlow::SplitAttrs>());
        return result;
      }
      case 23: {
        ReturnType result = v(this->get<::FlexFlow::SoftmaxAttrs>());
        return result;
      }
      case 24: {
        ReturnType result = v(this->get<::FlexFlow::TopKAttrs>());
        return result;
      }
      case 25: {
        ReturnType result = v(this->get<::FlexFlow::TransposeAttrs>());
        return result;
      }
      case 26: {
        ReturnType result = v(this->get<::FlexFlow::WeightAttrs>());
        return result;
      }
      default: {
        throw std::runtime_error(
            fmt::format("Unknown index {} for type ComputationGraphOpAttrs",
                        this->index()));
      }
    }
  }
  template <typename ReturnType, typename Visitor>
  ReturnType visit(Visitor &&v) {
    switch (this->index()) {
      case 0: {
        ReturnType result = v(this->get<::FlexFlow::BatchMatmulAttrs>());
        return result;
      }
      case 1: {
        ReturnType result = v(this->get<::FlexFlow::BatchNormAttrs>());
        return result;
      }
      case 2: {
        ReturnType result = v(this->get<::FlexFlow::BroadcastAttrs>());
        return result;
      }
      case 3: {
        ReturnType result = v(this->get<::FlexFlow::CastAttrs>());
        return result;
      }
      case 4: {
        ReturnType result = v(this->get<::FlexFlow::ConcatAttrs>());
        return result;
      }
      case 5: {
        ReturnType result = v(this->get<::FlexFlow::Conv2DAttrs>());
        return result;
      }
      case 6: {
        ReturnType result = v(this->get<::FlexFlow::DropoutAttrs>());
        return result;
      }
      case 7: {
        ReturnType result = v(this->get<::FlexFlow::ElementBinaryAttrs>());
        return result;
      }
      case 8: {
        ReturnType result = v(this->get<::FlexFlow::ElementUnaryAttrs>());
        return result;
      }
      case 9: {
        ReturnType result = v(this->get<::FlexFlow::ElementScalarUnaryAttrs>());
        return result;
      }
      case 10: {
        ReturnType result = v(this->get<::FlexFlow::EmbeddingAttrs>());
        return result;
      }
      case 11: {
        ReturnType result = v(this->get<::FlexFlow::FlatAttrs>());
        return result;
      }
      case 12: {
        ReturnType result = v(this->get<::FlexFlow::GatherAttrs>());
        return result;
      }
      case 13: {
        ReturnType result = v(this->get<::FlexFlow::InputAttrs>());
        return result;
      }
      case 14: {
        ReturnType result = v(this->get<::FlexFlow::LayerNormAttrs>());
        return result;
      }
      case 15: {
        ReturnType result = v(this->get<::FlexFlow::LinearAttrs>());
        return result;
      }
      case 16: {
        ReturnType result = v(this->get<::FlexFlow::MultiHeadAttentionAttrs>());
        return result;
      }
      case 17: {
        ReturnType result = v(this->get<::FlexFlow::NoopAttrs>());
        return result;
      }
      case 18: {
        ReturnType result = v(this->get<::FlexFlow::Pool2DAttrs>());
        return result;
      }
      case 19: {
        ReturnType result = v(this->get<::FlexFlow::ReduceAttrs>());
        return result;
      }
      case 20: {
        ReturnType result = v(this->get<::FlexFlow::ReverseAttrs>());
        return result;
      }
      case 21: {
        ReturnType result = v(this->get<::FlexFlow::ReshapeAttrs>());
        return result;
      }
      case 22: {
        ReturnType result = v(this->get<::FlexFlow::SplitAttrs>());
        return result;
      }
      case 23: {
        ReturnType result = v(this->get<::FlexFlow::SoftmaxAttrs>());
        return result;
      }
      case 24: {
        ReturnType result = v(this->get<::FlexFlow::TopKAttrs>());
        return result;
      }
      case 25: {
        ReturnType result = v(this->get<::FlexFlow::TransposeAttrs>());
        return result;
      }
      case 26: {
        ReturnType result = v(this->get<::FlexFlow::WeightAttrs>());
        return result;
      }
      default: {
        throw std::runtime_error(
            fmt::format("Unknown index {} for type ComputationGraphOpAttrs",
                        this->index()));
      }
    }
  }
  template <typename T>
  bool has() const {
    static_assert(
        IsPartOfComputationGraphOpAttrs_v<T>,
        "ComputationGraphOpAttrs::has() expected one of "
        "[::FlexFlow::BatchMatmulAttrs, ::FlexFlow::BatchNormAttrs, "
        "::FlexFlow::BroadcastAttrs, ::FlexFlow::CastAttrs, "
        "::FlexFlow::ConcatAttrs, ::FlexFlow::Conv2DAttrs, "
        "::FlexFlow::DropoutAttrs, ::FlexFlow::ElementBinaryAttrs, "
        "::FlexFlow::ElementUnaryAttrs, ::FlexFlow::ElementScalarUnaryAttrs, "
        "::FlexFlow::EmbeddingAttrs, ::FlexFlow::FlatAttrs, "
        "::FlexFlow::GatherAttrs, ::FlexFlow::InputAttrs, "
        "::FlexFlow::LayerNormAttrs, ::FlexFlow::LinearAttrs, "
        "::FlexFlow::MultiHeadAttentionAttrs, ::FlexFlow::NoopAttrs, "
        "::FlexFlow::Pool2DAttrs, ::FlexFlow::ReduceAttrs, "
        "::FlexFlow::ReverseAttrs, ::FlexFlow::ReshapeAttrs, "
        "::FlexFlow::SplitAttrs, ::FlexFlow::SoftmaxAttrs, "
        "::FlexFlow::TopKAttrs, ::FlexFlow::TransposeAttrs, "
        "::FlexFlow::WeightAttrs], received T");
    return std::holds_alternative<T>(this->raw_variant);
  }
  template <typename T>
  T const &get() const {
    static_assert(
        IsPartOfComputationGraphOpAttrs_v<T>,
        "ComputationGraphOpAttrs::get() expected one of "
        "[::FlexFlow::BatchMatmulAttrs, ::FlexFlow::BatchNormAttrs, "
        "::FlexFlow::BroadcastAttrs, ::FlexFlow::CastAttrs, "
        "::FlexFlow::ConcatAttrs, ::FlexFlow::Conv2DAttrs, "
        "::FlexFlow::DropoutAttrs, ::FlexFlow::ElementBinaryAttrs, "
        "::FlexFlow::ElementUnaryAttrs, ::FlexFlow::ElementScalarUnaryAttrs, "
        "::FlexFlow::EmbeddingAttrs, ::FlexFlow::FlatAttrs, "
        "::FlexFlow::GatherAttrs, ::FlexFlow::InputAttrs, "
        "::FlexFlow::LayerNormAttrs, ::FlexFlow::LinearAttrs, "
        "::FlexFlow::MultiHeadAttentionAttrs, ::FlexFlow::NoopAttrs, "
        "::FlexFlow::Pool2DAttrs, ::FlexFlow::ReduceAttrs, "
        "::FlexFlow::ReverseAttrs, ::FlexFlow::ReshapeAttrs, "
        "::FlexFlow::SplitAttrs, ::FlexFlow::SoftmaxAttrs, "
        "::FlexFlow::TopKAttrs, ::FlexFlow::TransposeAttrs, "
        "::FlexFlow::WeightAttrs], received T");
    return std::get<T>(this->raw_variant);
  }
  template <typename T>
  T &get() {
    static_assert(
        IsPartOfComputationGraphOpAttrs_v<T>,
        "ComputationGraphOpAttrs::get() expected one of "
        "[::FlexFlow::BatchMatmulAttrs, ::FlexFlow::BatchNormAttrs, "
        "::FlexFlow::BroadcastAttrs, ::FlexFlow::CastAttrs, "
        "::FlexFlow::ConcatAttrs, ::FlexFlow::Conv2DAttrs, "
        "::FlexFlow::DropoutAttrs, ::FlexFlow::ElementBinaryAttrs, "
        "::FlexFlow::ElementUnaryAttrs, ::FlexFlow::ElementScalarUnaryAttrs, "
        "::FlexFlow::EmbeddingAttrs, ::FlexFlow::FlatAttrs, "
        "::FlexFlow::GatherAttrs, ::FlexFlow::InputAttrs, "
        "::FlexFlow::LayerNormAttrs, ::FlexFlow::LinearAttrs, "
        "::FlexFlow::MultiHeadAttentionAttrs, ::FlexFlow::NoopAttrs, "
        "::FlexFlow::Pool2DAttrs, ::FlexFlow::ReduceAttrs, "
        "::FlexFlow::ReverseAttrs, ::FlexFlow::ReshapeAttrs, "
        "::FlexFlow::SplitAttrs, ::FlexFlow::SoftmaxAttrs, "
        "::FlexFlow::TopKAttrs, ::FlexFlow::TransposeAttrs, "
        "::FlexFlow::WeightAttrs], received T");
    return std::get<T>(this->raw_variant);
  }
  size_t index() const {
    return this->raw_variant.index();
  }
  bool operator==(ComputationGraphOpAttrs const &) const;
  bool operator!=(ComputationGraphOpAttrs const &) const;
  bool operator<(ComputationGraphOpAttrs const &) const;
  bool operator>(ComputationGraphOpAttrs const &) const;
  bool operator<=(ComputationGraphOpAttrs const &) const;
  bool operator>=(ComputationGraphOpAttrs const &) const;
  std::variant<::FlexFlow::BatchMatmulAttrs,
               ::FlexFlow::BatchNormAttrs,
               ::FlexFlow::BroadcastAttrs,
               ::FlexFlow::CastAttrs,
               ::FlexFlow::ConcatAttrs,
               ::FlexFlow::Conv2DAttrs,
               ::FlexFlow::DropoutAttrs,
               ::FlexFlow::ElementBinaryAttrs,
               ::FlexFlow::ElementUnaryAttrs,
               ::FlexFlow::ElementScalarUnaryAttrs,
               ::FlexFlow::EmbeddingAttrs,
               ::FlexFlow::FlatAttrs,
               ::FlexFlow::GatherAttrs,
               ::FlexFlow::InputAttrs,
               ::FlexFlow::LayerNormAttrs,
               ::FlexFlow::LinearAttrs,
               ::FlexFlow::MultiHeadAttentionAttrs,
               ::FlexFlow::NoopAttrs,
               ::FlexFlow::Pool2DAttrs,
               ::FlexFlow::ReduceAttrs,
               ::FlexFlow::ReverseAttrs,
               ::FlexFlow::ReshapeAttrs,
               ::FlexFlow::SplitAttrs,
               ::FlexFlow::SoftmaxAttrs,
               ::FlexFlow::TopKAttrs,
               ::FlexFlow::TransposeAttrs,
               ::FlexFlow::WeightAttrs>
      raw_variant;
};
} // namespace FlexFlow
namespace std {
template <>
struct hash<::FlexFlow::ComputationGraphOpAttrs> {
  size_t operator()(::FlexFlow::ComputationGraphOpAttrs const &) const;
};
} // namespace std
namespace nlohmann {
template <>
struct adl_serializer<::FlexFlow::ComputationGraphOpAttrs> {
  static ::FlexFlow::ComputationGraphOpAttrs from_json(json const &);
  static void to_json(json &, ::FlexFlow::ComputationGraphOpAttrs const &);
};
} // namespace nlohmann
namespace FlexFlow {
std::string format_as(::FlexFlow::ComputationGraphOpAttrs const &);
std::ostream &operator<<(std::ostream &,
                         ::FlexFlow::ComputationGraphOpAttrs const &);
} // namespace FlexFlow

#endif // _FLEXFLOW_LIB_OP_ATTRS_INCLUDE_OP_ATTRS_COMPUTATION_GRAPH_OP_ATTRS_DTG_H
