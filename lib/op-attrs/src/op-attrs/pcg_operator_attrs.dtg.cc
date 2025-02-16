// THIS FILE WAS AUTO-GENERATED BY proj. DO NOT MODIFY IT!
// If you would like to modify this datatype, instead modify
// lib/op-attrs/include/op-attrs/pcg_operator_attrs.variant.toml
/* proj-data
{
  "generated_from": "cf0da4385b7554748a06ec25ccf17f2f"
}
*/

#include "op-attrs/pcg_operator_attrs.dtg.h"

#include "fmt/format.h"
#include <sstream>
#include <stdexcept>

namespace FlexFlow {
PCGOperatorAttrs::PCGOperatorAttrs(::FlexFlow::BatchMatmulAttrs const &v)
    : raw_variant(v) {}
PCGOperatorAttrs::PCGOperatorAttrs(::FlexFlow::BatchNormAttrs const &v)
    : raw_variant(v) {}
PCGOperatorAttrs::PCGOperatorAttrs(::FlexFlow::CastAttrs const &v)
    : raw_variant(v) {}
PCGOperatorAttrs::PCGOperatorAttrs(::FlexFlow::CombineAttrs const &v)
    : raw_variant(v) {}
PCGOperatorAttrs::PCGOperatorAttrs(::FlexFlow::ConcatAttrs const &v)
    : raw_variant(v) {}
PCGOperatorAttrs::PCGOperatorAttrs(::FlexFlow::Conv2DAttrs const &v)
    : raw_variant(v) {}
PCGOperatorAttrs::PCGOperatorAttrs(::FlexFlow::DropoutAttrs const &v)
    : raw_variant(v) {}
PCGOperatorAttrs::PCGOperatorAttrs(::FlexFlow::ElementBinaryAttrs const &v)
    : raw_variant(v) {}
PCGOperatorAttrs::PCGOperatorAttrs(::FlexFlow::ElementUnaryAttrs const &v)
    : raw_variant(v) {}
PCGOperatorAttrs::PCGOperatorAttrs(::FlexFlow::ElementScalarUnaryAttrs const &v)
    : raw_variant(v) {}
PCGOperatorAttrs::PCGOperatorAttrs(::FlexFlow::EmbeddingAttrs const &v)
    : raw_variant(v) {}
PCGOperatorAttrs::PCGOperatorAttrs(::FlexFlow::FlatAttrs const &v)
    : raw_variant(v) {}
PCGOperatorAttrs::PCGOperatorAttrs(::FlexFlow::GatherAttrs const &v)
    : raw_variant(v) {}
PCGOperatorAttrs::PCGOperatorAttrs(::FlexFlow::InputAttrs const &v)
    : raw_variant(v) {}
PCGOperatorAttrs::PCGOperatorAttrs(::FlexFlow::LayerNormAttrs const &v)
    : raw_variant(v) {}
PCGOperatorAttrs::PCGOperatorAttrs(::FlexFlow::LinearAttrs const &v)
    : raw_variant(v) {}
PCGOperatorAttrs::PCGOperatorAttrs(::FlexFlow::MultiHeadAttentionAttrs const &v)
    : raw_variant(v) {}
PCGOperatorAttrs::PCGOperatorAttrs(::FlexFlow::NoopAttrs const &v)
    : raw_variant(v) {}
PCGOperatorAttrs::PCGOperatorAttrs(::FlexFlow::Pool2DAttrs const &v)
    : raw_variant(v) {}
PCGOperatorAttrs::PCGOperatorAttrs(::FlexFlow::ReduceAttrs const &v)
    : raw_variant(v) {}
PCGOperatorAttrs::PCGOperatorAttrs(::FlexFlow::ReductionAttrs const &v)
    : raw_variant(v) {}
PCGOperatorAttrs::PCGOperatorAttrs(::FlexFlow::RepartitionAttrs const &v)
    : raw_variant(v) {}
PCGOperatorAttrs::PCGOperatorAttrs(::FlexFlow::ReplicateAttrs const &v)
    : raw_variant(v) {}
PCGOperatorAttrs::PCGOperatorAttrs(::FlexFlow::ReverseAttrs const &v)
    : raw_variant(v) {}
PCGOperatorAttrs::PCGOperatorAttrs(::FlexFlow::ReshapeAttrs const &v)
    : raw_variant(v) {}
PCGOperatorAttrs::PCGOperatorAttrs(::FlexFlow::SplitAttrs const &v)
    : raw_variant(v) {}
PCGOperatorAttrs::PCGOperatorAttrs(::FlexFlow::SoftmaxAttrs const &v)
    : raw_variant(v) {}
PCGOperatorAttrs::PCGOperatorAttrs(::FlexFlow::TopKAttrs const &v)
    : raw_variant(v) {}
PCGOperatorAttrs::PCGOperatorAttrs(::FlexFlow::TransposeAttrs const &v)
    : raw_variant(v) {}
bool PCGOperatorAttrs::operator==(PCGOperatorAttrs const &other) const {
  return this->raw_variant == other.raw_variant;
}
bool PCGOperatorAttrs::operator!=(PCGOperatorAttrs const &other) const {
  return this->raw_variant != other.raw_variant;
}
bool PCGOperatorAttrs::operator<(PCGOperatorAttrs const &other) const {
  return this->raw_variant < other.raw_variant;
}
bool PCGOperatorAttrs::operator>(PCGOperatorAttrs const &other) const {
  return this->raw_variant > other.raw_variant;
}
bool PCGOperatorAttrs::operator<=(PCGOperatorAttrs const &other) const {
  return this->raw_variant <= other.raw_variant;
}
bool PCGOperatorAttrs::operator>=(PCGOperatorAttrs const &other) const {
  return this->raw_variant >= other.raw_variant;
}
} // namespace FlexFlow
namespace std {
size_t hash<::FlexFlow::PCGOperatorAttrs>::operator()(
    ::FlexFlow::PCGOperatorAttrs const &x) const {
  return std::hash<std::variant<::FlexFlow::BatchMatmulAttrs,
                                ::FlexFlow::BatchNormAttrs,
                                ::FlexFlow::CastAttrs,
                                ::FlexFlow::CombineAttrs,
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
                                ::FlexFlow::ReductionAttrs,
                                ::FlexFlow::RepartitionAttrs,
                                ::FlexFlow::ReplicateAttrs,
                                ::FlexFlow::ReverseAttrs,
                                ::FlexFlow::ReshapeAttrs,
                                ::FlexFlow::SplitAttrs,
                                ::FlexFlow::SoftmaxAttrs,
                                ::FlexFlow::TopKAttrs,
                                ::FlexFlow::TransposeAttrs>>{}(x.raw_variant);
}
} // namespace std
namespace nlohmann {
::FlexFlow::PCGOperatorAttrs
    adl_serializer<::FlexFlow::PCGOperatorAttrs>::from_json(json const &j) {
  std::string key = j.at("type").template get<std::string>();
  if (key == "batch_matmul") {
    return ::FlexFlow::PCGOperatorAttrs{
        j.at("value").template get<::FlexFlow::BatchMatmulAttrs>()};
  } else if (key == "batch_norm") {
    return ::FlexFlow::PCGOperatorAttrs{
        j.at("value").template get<::FlexFlow::BatchNormAttrs>()};
  } else if (key == "cast") {
    return ::FlexFlow::PCGOperatorAttrs{
        j.at("value").template get<::FlexFlow::CastAttrs>()};
  } else if (key == "combine_distributed") {
    return ::FlexFlow::PCGOperatorAttrs{
        j.at("value").template get<::FlexFlow::CombineAttrs>()};
  } else if (key == "concat") {
    return ::FlexFlow::PCGOperatorAttrs{
        j.at("value").template get<::FlexFlow::ConcatAttrs>()};
  } else if (key == "conv2d") {
    return ::FlexFlow::PCGOperatorAttrs{
        j.at("value").template get<::FlexFlow::Conv2DAttrs>()};
  } else if (key == "dropout") {
    return ::FlexFlow::PCGOperatorAttrs{
        j.at("value").template get<::FlexFlow::DropoutAttrs>()};
  } else if (key == "element_binary") {
    return ::FlexFlow::PCGOperatorAttrs{
        j.at("value").template get<::FlexFlow::ElementBinaryAttrs>()};
  } else if (key == "element_unary") {
    return ::FlexFlow::PCGOperatorAttrs{
        j.at("value").template get<::FlexFlow::ElementUnaryAttrs>()};
  } else if (key == "element_scalar_unary") {
    return ::FlexFlow::PCGOperatorAttrs{
        j.at("value").template get<::FlexFlow::ElementScalarUnaryAttrs>()};
  } else if (key == "embedding") {
    return ::FlexFlow::PCGOperatorAttrs{
        j.at("value").template get<::FlexFlow::EmbeddingAttrs>()};
  } else if (key == "flat") {
    return ::FlexFlow::PCGOperatorAttrs{
        j.at("value").template get<::FlexFlow::FlatAttrs>()};
  } else if (key == "gather") {
    return ::FlexFlow::PCGOperatorAttrs{
        j.at("value").template get<::FlexFlow::GatherAttrs>()};
  } else if (key == "input") {
    return ::FlexFlow::PCGOperatorAttrs{
        j.at("value").template get<::FlexFlow::InputAttrs>()};
  } else if (key == "layer_norm") {
    return ::FlexFlow::PCGOperatorAttrs{
        j.at("value").template get<::FlexFlow::LayerNormAttrs>()};
  } else if (key == "linear") {
    return ::FlexFlow::PCGOperatorAttrs{
        j.at("value").template get<::FlexFlow::LinearAttrs>()};
  } else if (key == "multi_head_attention") {
    return ::FlexFlow::PCGOperatorAttrs{
        j.at("value").template get<::FlexFlow::MultiHeadAttentionAttrs>()};
  } else if (key == "noop") {
    return ::FlexFlow::PCGOperatorAttrs{
        j.at("value").template get<::FlexFlow::NoopAttrs>()};
  } else if (key == "pool2d") {
    return ::FlexFlow::PCGOperatorAttrs{
        j.at("value").template get<::FlexFlow::Pool2DAttrs>()};
  } else if (key == "reduce") {
    return ::FlexFlow::PCGOperatorAttrs{
        j.at("value").template get<::FlexFlow::ReduceAttrs>()};
  } else if (key == "reduce_distributed") {
    return ::FlexFlow::PCGOperatorAttrs{
        j.at("value").template get<::FlexFlow::ReductionAttrs>()};
  } else if (key == "partition_distributed") {
    return ::FlexFlow::PCGOperatorAttrs{
        j.at("value").template get<::FlexFlow::RepartitionAttrs>()};
  } else if (key == "replicate_distributed") {
    return ::FlexFlow::PCGOperatorAttrs{
        j.at("value").template get<::FlexFlow::ReplicateAttrs>()};
  } else if (key == "reverse") {
    return ::FlexFlow::PCGOperatorAttrs{
        j.at("value").template get<::FlexFlow::ReverseAttrs>()};
  } else if (key == "reshape") {
    return ::FlexFlow::PCGOperatorAttrs{
        j.at("value").template get<::FlexFlow::ReshapeAttrs>()};
  } else if (key == "split") {
    return ::FlexFlow::PCGOperatorAttrs{
        j.at("value").template get<::FlexFlow::SplitAttrs>()};
  } else if (key == "softmax") {
    return ::FlexFlow::PCGOperatorAttrs{
        j.at("value").template get<::FlexFlow::SoftmaxAttrs>()};
  } else if (key == "topk") {
    return ::FlexFlow::PCGOperatorAttrs{
        j.at("value").template get<::FlexFlow::TopKAttrs>()};
  } else if (key == "transpose") {
    return ::FlexFlow::PCGOperatorAttrs{
        j.at("value").template get<::FlexFlow::TransposeAttrs>()};
  } else {
    throw std::runtime_error(fmt::format("Unknown type key {}", key));
  }
}
void adl_serializer<::FlexFlow::PCGOperatorAttrs>::to_json(
    json &j, ::FlexFlow::PCGOperatorAttrs const &x) {
  j["__type"] = "PCGOperatorAttrs";
  switch (x.index()) {
    case 0: {
      j["type"] = "batch_matmul";
      j["value"] = x.get<::FlexFlow::BatchMatmulAttrs>();
      break;
    }
    case 1: {
      j["type"] = "batch_norm";
      j["value"] = x.get<::FlexFlow::BatchNormAttrs>();
      break;
    }
    case 2: {
      j["type"] = "cast";
      j["value"] = x.get<::FlexFlow::CastAttrs>();
      break;
    }
    case 3: {
      j["type"] = "combine_distributed";
      j["value"] = x.get<::FlexFlow::CombineAttrs>();
      break;
    }
    case 4: {
      j["type"] = "concat";
      j["value"] = x.get<::FlexFlow::ConcatAttrs>();
      break;
    }
    case 5: {
      j["type"] = "conv2d";
      j["value"] = x.get<::FlexFlow::Conv2DAttrs>();
      break;
    }
    case 6: {
      j["type"] = "dropout";
      j["value"] = x.get<::FlexFlow::DropoutAttrs>();
      break;
    }
    case 7: {
      j["type"] = "element_binary";
      j["value"] = x.get<::FlexFlow::ElementBinaryAttrs>();
      break;
    }
    case 8: {
      j["type"] = "element_unary";
      j["value"] = x.get<::FlexFlow::ElementUnaryAttrs>();
      break;
    }
    case 9: {
      j["type"] = "element_scalar_unary";
      j["value"] = x.get<::FlexFlow::ElementScalarUnaryAttrs>();
      break;
    }
    case 10: {
      j["type"] = "embedding";
      j["value"] = x.get<::FlexFlow::EmbeddingAttrs>();
      break;
    }
    case 11: {
      j["type"] = "flat";
      j["value"] = x.get<::FlexFlow::FlatAttrs>();
      break;
    }
    case 12: {
      j["type"] = "gather";
      j["value"] = x.get<::FlexFlow::GatherAttrs>();
      break;
    }
    case 13: {
      j["type"] = "input";
      j["value"] = x.get<::FlexFlow::InputAttrs>();
      break;
    }
    case 14: {
      j["type"] = "layer_norm";
      j["value"] = x.get<::FlexFlow::LayerNormAttrs>();
      break;
    }
    case 15: {
      j["type"] = "linear";
      j["value"] = x.get<::FlexFlow::LinearAttrs>();
      break;
    }
    case 16: {
      j["type"] = "multi_head_attention";
      j["value"] = x.get<::FlexFlow::MultiHeadAttentionAttrs>();
      break;
    }
    case 17: {
      j["type"] = "noop";
      j["value"] = x.get<::FlexFlow::NoopAttrs>();
      break;
    }
    case 18: {
      j["type"] = "pool2d";
      j["value"] = x.get<::FlexFlow::Pool2DAttrs>();
      break;
    }
    case 19: {
      j["type"] = "reduce";
      j["value"] = x.get<::FlexFlow::ReduceAttrs>();
      break;
    }
    case 20: {
      j["type"] = "reduce_distributed";
      j["value"] = x.get<::FlexFlow::ReductionAttrs>();
      break;
    }
    case 21: {
      j["type"] = "partition_distributed";
      j["value"] = x.get<::FlexFlow::RepartitionAttrs>();
      break;
    }
    case 22: {
      j["type"] = "replicate_distributed";
      j["value"] = x.get<::FlexFlow::ReplicateAttrs>();
      break;
    }
    case 23: {
      j["type"] = "reverse";
      j["value"] = x.get<::FlexFlow::ReverseAttrs>();
      break;
    }
    case 24: {
      j["type"] = "reshape";
      j["value"] = x.get<::FlexFlow::ReshapeAttrs>();
      break;
    }
    case 25: {
      j["type"] = "split";
      j["value"] = x.get<::FlexFlow::SplitAttrs>();
      break;
    }
    case 26: {
      j["type"] = "softmax";
      j["value"] = x.get<::FlexFlow::SoftmaxAttrs>();
      break;
    }
    case 27: {
      j["type"] = "topk";
      j["value"] = x.get<::FlexFlow::TopKAttrs>();
      break;
    }
    case 28: {
      j["type"] = "transpose";
      j["value"] = x.get<::FlexFlow::TransposeAttrs>();
      break;
    }
    default: {
      throw std::runtime_error(
          fmt::format("Unknown index {} for type PCGOperatorAttrs", x.index()));
    }
  }
}
} // namespace nlohmann
namespace FlexFlow {
std::string format_as(::FlexFlow::PCGOperatorAttrs const &x) {
  std::ostringstream oss;
  switch (x.index()) {
    case 0: {
      oss << "<PCGOperatorAttrs batch_matmul="
          << x.get<::FlexFlow::BatchMatmulAttrs>() << ">";
      break;
    }
    case 1: {
      oss << "<PCGOperatorAttrs batch_norm="
          << x.get<::FlexFlow::BatchNormAttrs>() << ">";
      break;
    }
    case 2: {
      oss << "<PCGOperatorAttrs cast=" << x.get<::FlexFlow::CastAttrs>() << ">";
      break;
    }
    case 3: {
      oss << "<PCGOperatorAttrs combine_distributed="
          << x.get<::FlexFlow::CombineAttrs>() << ">";
      break;
    }
    case 4: {
      oss << "<PCGOperatorAttrs concat=" << x.get<::FlexFlow::ConcatAttrs>()
          << ">";
      break;
    }
    case 5: {
      oss << "<PCGOperatorAttrs conv2d=" << x.get<::FlexFlow::Conv2DAttrs>()
          << ">";
      break;
    }
    case 6: {
      oss << "<PCGOperatorAttrs dropout=" << x.get<::FlexFlow::DropoutAttrs>()
          << ">";
      break;
    }
    case 7: {
      oss << "<PCGOperatorAttrs element_binary="
          << x.get<::FlexFlow::ElementBinaryAttrs>() << ">";
      break;
    }
    case 8: {
      oss << "<PCGOperatorAttrs element_unary="
          << x.get<::FlexFlow::ElementUnaryAttrs>() << ">";
      break;
    }
    case 9: {
      oss << "<PCGOperatorAttrs element_scalar_unary="
          << x.get<::FlexFlow::ElementScalarUnaryAttrs>() << ">";
      break;
    }
    case 10: {
      oss << "<PCGOperatorAttrs embedding="
          << x.get<::FlexFlow::EmbeddingAttrs>() << ">";
      break;
    }
    case 11: {
      oss << "<PCGOperatorAttrs flat=" << x.get<::FlexFlow::FlatAttrs>() << ">";
      break;
    }
    case 12: {
      oss << "<PCGOperatorAttrs gather=" << x.get<::FlexFlow::GatherAttrs>()
          << ">";
      break;
    }
    case 13: {
      oss << "<PCGOperatorAttrs input=" << x.get<::FlexFlow::InputAttrs>()
          << ">";
      break;
    }
    case 14: {
      oss << "<PCGOperatorAttrs layer_norm="
          << x.get<::FlexFlow::LayerNormAttrs>() << ">";
      break;
    }
    case 15: {
      oss << "<PCGOperatorAttrs linear=" << x.get<::FlexFlow::LinearAttrs>()
          << ">";
      break;
    }
    case 16: {
      oss << "<PCGOperatorAttrs multi_head_attention="
          << x.get<::FlexFlow::MultiHeadAttentionAttrs>() << ">";
      break;
    }
    case 17: {
      oss << "<PCGOperatorAttrs noop=" << x.get<::FlexFlow::NoopAttrs>() << ">";
      break;
    }
    case 18: {
      oss << "<PCGOperatorAttrs pool2d=" << x.get<::FlexFlow::Pool2DAttrs>()
          << ">";
      break;
    }
    case 19: {
      oss << "<PCGOperatorAttrs reduce=" << x.get<::FlexFlow::ReduceAttrs>()
          << ">";
      break;
    }
    case 20: {
      oss << "<PCGOperatorAttrs reduce_distributed="
          << x.get<::FlexFlow::ReductionAttrs>() << ">";
      break;
    }
    case 21: {
      oss << "<PCGOperatorAttrs partition_distributed="
          << x.get<::FlexFlow::RepartitionAttrs>() << ">";
      break;
    }
    case 22: {
      oss << "<PCGOperatorAttrs replicate_distributed="
          << x.get<::FlexFlow::ReplicateAttrs>() << ">";
      break;
    }
    case 23: {
      oss << "<PCGOperatorAttrs reverse=" << x.get<::FlexFlow::ReverseAttrs>()
          << ">";
      break;
    }
    case 24: {
      oss << "<PCGOperatorAttrs reshape=" << x.get<::FlexFlow::ReshapeAttrs>()
          << ">";
      break;
    }
    case 25: {
      oss << "<PCGOperatorAttrs split=" << x.get<::FlexFlow::SplitAttrs>()
          << ">";
      break;
    }
    case 26: {
      oss << "<PCGOperatorAttrs softmax=" << x.get<::FlexFlow::SoftmaxAttrs>()
          << ">";
      break;
    }
    case 27: {
      oss << "<PCGOperatorAttrs topk=" << x.get<::FlexFlow::TopKAttrs>() << ">";
      break;
    }
    case 28: {
      oss << "<PCGOperatorAttrs transpose="
          << x.get<::FlexFlow::TransposeAttrs>() << ">";
      break;
    }
    default: {
      throw std::runtime_error(
          fmt::format("Unknown index {} for type PCGOperatorAttrs", x.index()));
      break;
    }
  }
  return oss.str();
}
std::ostream &operator<<(std::ostream &s,
                         ::FlexFlow::PCGOperatorAttrs const &x) {
  return s << fmt::to_string(x);
}
} // namespace FlexFlow
