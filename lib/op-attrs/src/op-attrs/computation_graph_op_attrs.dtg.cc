// THIS FILE WAS AUTO-GENERATED BY proj. DO NOT MODIFY IT!
// If you would like to modify this datatype, instead modify
// lib/op-attrs/include/op-attrs/computation_graph_op_attrs.variant.toml
/* proj-data
{
  "generated_from": "dc1445fed47c2acaed22038975eec627"
}
*/

#include "op-attrs/computation_graph_op_attrs.dtg.h"

#include "fmt/format.h"
#include <sstream>
#include <stdexcept>

namespace FlexFlow {
ComputationGraphOpAttrs::ComputationGraphOpAttrs(
    ::FlexFlow::BatchMatmulAttrs const &v)
    : raw_variant(v) {}
ComputationGraphOpAttrs::ComputationGraphOpAttrs(
    ::FlexFlow::BatchNormAttrs const &v)
    : raw_variant(v) {}
ComputationGraphOpAttrs::ComputationGraphOpAttrs(
    ::FlexFlow::BroadcastAttrs const &v)
    : raw_variant(v) {}
ComputationGraphOpAttrs::ComputationGraphOpAttrs(::FlexFlow::CastAttrs const &v)
    : raw_variant(v) {}
ComputationGraphOpAttrs::ComputationGraphOpAttrs(
    ::FlexFlow::ConcatAttrs const &v)
    : raw_variant(v) {}
ComputationGraphOpAttrs::ComputationGraphOpAttrs(
    ::FlexFlow::Conv2DAttrs const &v)
    : raw_variant(v) {}
ComputationGraphOpAttrs::ComputationGraphOpAttrs(
    ::FlexFlow::DropoutAttrs const &v)
    : raw_variant(v) {}
ComputationGraphOpAttrs::ComputationGraphOpAttrs(
    ::FlexFlow::ElementBinaryAttrs const &v)
    : raw_variant(v) {}
ComputationGraphOpAttrs::ComputationGraphOpAttrs(
    ::FlexFlow::ElementUnaryAttrs const &v)
    : raw_variant(v) {}
ComputationGraphOpAttrs::ComputationGraphOpAttrs(
    ::FlexFlow::ElementScalarUnaryAttrs const &v)
    : raw_variant(v) {}
ComputationGraphOpAttrs::ComputationGraphOpAttrs(
    ::FlexFlow::EmbeddingAttrs const &v)
    : raw_variant(v) {}
ComputationGraphOpAttrs::ComputationGraphOpAttrs(::FlexFlow::FlatAttrs const &v)
    : raw_variant(v) {}
ComputationGraphOpAttrs::ComputationGraphOpAttrs(
    ::FlexFlow::GatherAttrs const &v)
    : raw_variant(v) {}
ComputationGraphOpAttrs::ComputationGraphOpAttrs(
    ::FlexFlow::InputAttrs const &v)
    : raw_variant(v) {}
ComputationGraphOpAttrs::ComputationGraphOpAttrs(
    ::FlexFlow::LayerNormAttrs const &v)
    : raw_variant(v) {}
ComputationGraphOpAttrs::ComputationGraphOpAttrs(
    ::FlexFlow::LinearAttrs const &v)
    : raw_variant(v) {}
ComputationGraphOpAttrs::ComputationGraphOpAttrs(
    ::FlexFlow::MultiHeadAttentionAttrs const &v)
    : raw_variant(v) {}
ComputationGraphOpAttrs::ComputationGraphOpAttrs(::FlexFlow::NoopAttrs const &v)
    : raw_variant(v) {}
ComputationGraphOpAttrs::ComputationGraphOpAttrs(
    ::FlexFlow::Pool2DAttrs const &v)
    : raw_variant(v) {}
ComputationGraphOpAttrs::ComputationGraphOpAttrs(
    ::FlexFlow::ReduceAttrs const &v)
    : raw_variant(v) {}
ComputationGraphOpAttrs::ComputationGraphOpAttrs(
    ::FlexFlow::ReverseAttrs const &v)
    : raw_variant(v) {}
ComputationGraphOpAttrs::ComputationGraphOpAttrs(
    ::FlexFlow::ReshapeAttrs const &v)
    : raw_variant(v) {}
ComputationGraphOpAttrs::ComputationGraphOpAttrs(
    ::FlexFlow::SplitAttrs const &v)
    : raw_variant(v) {}
ComputationGraphOpAttrs::ComputationGraphOpAttrs(
    ::FlexFlow::SoftmaxAttrs const &v)
    : raw_variant(v) {}
ComputationGraphOpAttrs::ComputationGraphOpAttrs(::FlexFlow::TopKAttrs const &v)
    : raw_variant(v) {}
ComputationGraphOpAttrs::ComputationGraphOpAttrs(
    ::FlexFlow::TransposeAttrs const &v)
    : raw_variant(v) {}
ComputationGraphOpAttrs::ComputationGraphOpAttrs(
    ::FlexFlow::WeightAttrs const &v)
    : raw_variant(v) {}
bool ComputationGraphOpAttrs::operator==(
    ComputationGraphOpAttrs const &other) const {
  return this->raw_variant == other.raw_variant;
}
bool ComputationGraphOpAttrs::operator!=(
    ComputationGraphOpAttrs const &other) const {
  return this->raw_variant != other.raw_variant;
}
bool ComputationGraphOpAttrs::operator<(
    ComputationGraphOpAttrs const &other) const {
  return this->raw_variant < other.raw_variant;
}
bool ComputationGraphOpAttrs::operator>(
    ComputationGraphOpAttrs const &other) const {
  return this->raw_variant > other.raw_variant;
}
bool ComputationGraphOpAttrs::operator<=(
    ComputationGraphOpAttrs const &other) const {
  return this->raw_variant <= other.raw_variant;
}
bool ComputationGraphOpAttrs::operator>=(
    ComputationGraphOpAttrs const &other) const {
  return this->raw_variant >= other.raw_variant;
}
} // namespace FlexFlow
namespace std {
size_t hash<::FlexFlow::ComputationGraphOpAttrs>::operator()(
    ::FlexFlow::ComputationGraphOpAttrs const &x) const {
  return std::hash<std::variant<::FlexFlow::BatchMatmulAttrs,
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
                                ::FlexFlow::WeightAttrs>>{}(x.raw_variant);
}
} // namespace std
namespace nlohmann {
::FlexFlow::ComputationGraphOpAttrs
    adl_serializer<::FlexFlow::ComputationGraphOpAttrs>::from_json(
        json const &j) {
  std::string key = j.at("type").template get<std::string>();
  if (key == "batch_matmul") {
    return ::FlexFlow::ComputationGraphOpAttrs{
        j.at("value").template get<::FlexFlow::BatchMatmulAttrs>()};
  } else if (key == "batch_norm") {
    return ::FlexFlow::ComputationGraphOpAttrs{
        j.at("value").template get<::FlexFlow::BatchNormAttrs>()};
  } else if (key == "broadcast") {
    return ::FlexFlow::ComputationGraphOpAttrs{
        j.at("value").template get<::FlexFlow::BroadcastAttrs>()};
  } else if (key == "cast") {
    return ::FlexFlow::ComputationGraphOpAttrs{
        j.at("value").template get<::FlexFlow::CastAttrs>()};
  } else if (key == "concat") {
    return ::FlexFlow::ComputationGraphOpAttrs{
        j.at("value").template get<::FlexFlow::ConcatAttrs>()};
  } else if (key == "conv2d") {
    return ::FlexFlow::ComputationGraphOpAttrs{
        j.at("value").template get<::FlexFlow::Conv2DAttrs>()};
  } else if (key == "dropout") {
    return ::FlexFlow::ComputationGraphOpAttrs{
        j.at("value").template get<::FlexFlow::DropoutAttrs>()};
  } else if (key == "element_binary") {
    return ::FlexFlow::ComputationGraphOpAttrs{
        j.at("value").template get<::FlexFlow::ElementBinaryAttrs>()};
  } else if (key == "element_unary") {
    return ::FlexFlow::ComputationGraphOpAttrs{
        j.at("value").template get<::FlexFlow::ElementUnaryAttrs>()};
  } else if (key == "element_scalar_unary") {
    return ::FlexFlow::ComputationGraphOpAttrs{
        j.at("value").template get<::FlexFlow::ElementScalarUnaryAttrs>()};
  } else if (key == "embedding") {
    return ::FlexFlow::ComputationGraphOpAttrs{
        j.at("value").template get<::FlexFlow::EmbeddingAttrs>()};
  } else if (key == "flat") {
    return ::FlexFlow::ComputationGraphOpAttrs{
        j.at("value").template get<::FlexFlow::FlatAttrs>()};
  } else if (key == "gather") {
    return ::FlexFlow::ComputationGraphOpAttrs{
        j.at("value").template get<::FlexFlow::GatherAttrs>()};
  } else if (key == "input") {
    return ::FlexFlow::ComputationGraphOpAttrs{
        j.at("value").template get<::FlexFlow::InputAttrs>()};
  } else if (key == "layer_norm") {
    return ::FlexFlow::ComputationGraphOpAttrs{
        j.at("value").template get<::FlexFlow::LayerNormAttrs>()};
  } else if (key == "linear") {
    return ::FlexFlow::ComputationGraphOpAttrs{
        j.at("value").template get<::FlexFlow::LinearAttrs>()};
  } else if (key == "multi_head_attention") {
    return ::FlexFlow::ComputationGraphOpAttrs{
        j.at("value").template get<::FlexFlow::MultiHeadAttentionAttrs>()};
  } else if (key == "noop") {
    return ::FlexFlow::ComputationGraphOpAttrs{
        j.at("value").template get<::FlexFlow::NoopAttrs>()};
  } else if (key == "pool2d") {
    return ::FlexFlow::ComputationGraphOpAttrs{
        j.at("value").template get<::FlexFlow::Pool2DAttrs>()};
  } else if (key == "reduce") {
    return ::FlexFlow::ComputationGraphOpAttrs{
        j.at("value").template get<::FlexFlow::ReduceAttrs>()};
  } else if (key == "reverse") {
    return ::FlexFlow::ComputationGraphOpAttrs{
        j.at("value").template get<::FlexFlow::ReverseAttrs>()};
  } else if (key == "reshape") {
    return ::FlexFlow::ComputationGraphOpAttrs{
        j.at("value").template get<::FlexFlow::ReshapeAttrs>()};
  } else if (key == "split") {
    return ::FlexFlow::ComputationGraphOpAttrs{
        j.at("value").template get<::FlexFlow::SplitAttrs>()};
  } else if (key == "softmax") {
    return ::FlexFlow::ComputationGraphOpAttrs{
        j.at("value").template get<::FlexFlow::SoftmaxAttrs>()};
  } else if (key == "topk") {
    return ::FlexFlow::ComputationGraphOpAttrs{
        j.at("value").template get<::FlexFlow::TopKAttrs>()};
  } else if (key == "transpose") {
    return ::FlexFlow::ComputationGraphOpAttrs{
        j.at("value").template get<::FlexFlow::TransposeAttrs>()};
  } else if (key == "weight") {
    return ::FlexFlow::ComputationGraphOpAttrs{
        j.at("value").template get<::FlexFlow::WeightAttrs>()};
  } else {
    throw std::runtime_error(fmt::format("Unknown type key {}", key));
  }
}
void adl_serializer<::FlexFlow::ComputationGraphOpAttrs>::to_json(
    json &j, ::FlexFlow::ComputationGraphOpAttrs const &x) {
  j["__type"] = "ComputationGraphOpAttrs";
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
      j["type"] = "broadcast";
      j["value"] = x.get<::FlexFlow::BroadcastAttrs>();
      break;
    }
    case 3: {
      j["type"] = "cast";
      j["value"] = x.get<::FlexFlow::CastAttrs>();
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
      j["type"] = "reverse";
      j["value"] = x.get<::FlexFlow::ReverseAttrs>();
      break;
    }
    case 21: {
      j["type"] = "reshape";
      j["value"] = x.get<::FlexFlow::ReshapeAttrs>();
      break;
    }
    case 22: {
      j["type"] = "split";
      j["value"] = x.get<::FlexFlow::SplitAttrs>();
      break;
    }
    case 23: {
      j["type"] = "softmax";
      j["value"] = x.get<::FlexFlow::SoftmaxAttrs>();
      break;
    }
    case 24: {
      j["type"] = "topk";
      j["value"] = x.get<::FlexFlow::TopKAttrs>();
      break;
    }
    case 25: {
      j["type"] = "transpose";
      j["value"] = x.get<::FlexFlow::TransposeAttrs>();
      break;
    }
    case 26: {
      j["type"] = "weight";
      j["value"] = x.get<::FlexFlow::WeightAttrs>();
      break;
    }
    default: {
      throw std::runtime_error(fmt::format(
          "Unknown index {} for type ComputationGraphOpAttrs", x.index()));
    }
  }
}
} // namespace nlohmann
namespace FlexFlow {
std::string format_as(::FlexFlow::ComputationGraphOpAttrs const &x) {
  std::ostringstream oss;
  switch (x.index()) {
    case 0: {
      oss << "<ComputationGraphOpAttrs batch_matmul="
          << x.get<::FlexFlow::BatchMatmulAttrs>() << ">";
      break;
    }
    case 1: {
      oss << "<ComputationGraphOpAttrs batch_norm="
          << x.get<::FlexFlow::BatchNormAttrs>() << ">";
      break;
    }
    case 2: {
      oss << "<ComputationGraphOpAttrs broadcast="
          << x.get<::FlexFlow::BroadcastAttrs>() << ">";
      break;
    }
    case 3: {
      oss << "<ComputationGraphOpAttrs cast=" << x.get<::FlexFlow::CastAttrs>()
          << ">";
      break;
    }
    case 4: {
      oss << "<ComputationGraphOpAttrs concat="
          << x.get<::FlexFlow::ConcatAttrs>() << ">";
      break;
    }
    case 5: {
      oss << "<ComputationGraphOpAttrs conv2d="
          << x.get<::FlexFlow::Conv2DAttrs>() << ">";
      break;
    }
    case 6: {
      oss << "<ComputationGraphOpAttrs dropout="
          << x.get<::FlexFlow::DropoutAttrs>() << ">";
      break;
    }
    case 7: {
      oss << "<ComputationGraphOpAttrs element_binary="
          << x.get<::FlexFlow::ElementBinaryAttrs>() << ">";
      break;
    }
    case 8: {
      oss << "<ComputationGraphOpAttrs element_unary="
          << x.get<::FlexFlow::ElementUnaryAttrs>() << ">";
      break;
    }
    case 9: {
      oss << "<ComputationGraphOpAttrs element_scalar_unary="
          << x.get<::FlexFlow::ElementScalarUnaryAttrs>() << ">";
      break;
    }
    case 10: {
      oss << "<ComputationGraphOpAttrs embedding="
          << x.get<::FlexFlow::EmbeddingAttrs>() << ">";
      break;
    }
    case 11: {
      oss << "<ComputationGraphOpAttrs flat=" << x.get<::FlexFlow::FlatAttrs>()
          << ">";
      break;
    }
    case 12: {
      oss << "<ComputationGraphOpAttrs gather="
          << x.get<::FlexFlow::GatherAttrs>() << ">";
      break;
    }
    case 13: {
      oss << "<ComputationGraphOpAttrs input="
          << x.get<::FlexFlow::InputAttrs>() << ">";
      break;
    }
    case 14: {
      oss << "<ComputationGraphOpAttrs layer_norm="
          << x.get<::FlexFlow::LayerNormAttrs>() << ">";
      break;
    }
    case 15: {
      oss << "<ComputationGraphOpAttrs linear="
          << x.get<::FlexFlow::LinearAttrs>() << ">";
      break;
    }
    case 16: {
      oss << "<ComputationGraphOpAttrs multi_head_attention="
          << x.get<::FlexFlow::MultiHeadAttentionAttrs>() << ">";
      break;
    }
    case 17: {
      oss << "<ComputationGraphOpAttrs noop=" << x.get<::FlexFlow::NoopAttrs>()
          << ">";
      break;
    }
    case 18: {
      oss << "<ComputationGraphOpAttrs pool2d="
          << x.get<::FlexFlow::Pool2DAttrs>() << ">";
      break;
    }
    case 19: {
      oss << "<ComputationGraphOpAttrs reduce="
          << x.get<::FlexFlow::ReduceAttrs>() << ">";
      break;
    }
    case 20: {
      oss << "<ComputationGraphOpAttrs reverse="
          << x.get<::FlexFlow::ReverseAttrs>() << ">";
      break;
    }
    case 21: {
      oss << "<ComputationGraphOpAttrs reshape="
          << x.get<::FlexFlow::ReshapeAttrs>() << ">";
      break;
    }
    case 22: {
      oss << "<ComputationGraphOpAttrs split="
          << x.get<::FlexFlow::SplitAttrs>() << ">";
      break;
    }
    case 23: {
      oss << "<ComputationGraphOpAttrs softmax="
          << x.get<::FlexFlow::SoftmaxAttrs>() << ">";
      break;
    }
    case 24: {
      oss << "<ComputationGraphOpAttrs topk=" << x.get<::FlexFlow::TopKAttrs>()
          << ">";
      break;
    }
    case 25: {
      oss << "<ComputationGraphOpAttrs transpose="
          << x.get<::FlexFlow::TransposeAttrs>() << ">";
      break;
    }
    case 26: {
      oss << "<ComputationGraphOpAttrs weight="
          << x.get<::FlexFlow::WeightAttrs>() << ">";
      break;
    }
    default: {
      throw std::runtime_error(fmt::format(
          "Unknown index {} for type ComputationGraphOpAttrs", x.index()));
      break;
    }
  }
  return oss.str();
}
std::ostream &operator<<(std::ostream &s,
                         ::FlexFlow::ComputationGraphOpAttrs const &x) {
  return s << fmt::to_string(x);
}
} // namespace FlexFlow
