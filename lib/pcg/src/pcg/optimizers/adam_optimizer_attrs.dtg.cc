// THIS FILE WAS AUTO-GENERATED BY proj. DO NOT MODIFY IT!
// If you would like to modify this datatype, instead modify
// lib/pcg/include/pcg/optimizers/adam_optimizer_attrs.struct.toml
/* proj-data
{
  "generated_from": "f49e1bebcb0ef2bc3c210073e3183d4d"
}
*/

#include "pcg/optimizers/adam_optimizer_attrs.dtg.h"

#include <sstream>

namespace FlexFlow {
AdamOptimizerAttrs::AdamOptimizerAttrs(double const &alpha,
                                       double const &beta1,
                                       double const &beta2,
                                       double const &weight_decay,
                                       double const &alpha_t,
                                       double const &beta_t,
                                       double const &beta2_t)
    : alpha(alpha), beta1(beta1), beta2(beta2), weight_decay(weight_decay),
      alpha_t(alpha_t), beta_t(beta_t), beta2_t(beta2_t) {}
bool AdamOptimizerAttrs::operator==(AdamOptimizerAttrs const &other) const {
  return std::tie(this->alpha,
                  this->beta1,
                  this->beta2,
                  this->weight_decay,
                  this->alpha_t,
                  this->beta_t,
                  this->beta2_t) == std::tie(other.alpha,
                                             other.beta1,
                                             other.beta2,
                                             other.weight_decay,
                                             other.alpha_t,
                                             other.beta_t,
                                             other.beta2_t);
}
bool AdamOptimizerAttrs::operator!=(AdamOptimizerAttrs const &other) const {
  return std::tie(this->alpha,
                  this->beta1,
                  this->beta2,
                  this->weight_decay,
                  this->alpha_t,
                  this->beta_t,
                  this->beta2_t) != std::tie(other.alpha,
                                             other.beta1,
                                             other.beta2,
                                             other.weight_decay,
                                             other.alpha_t,
                                             other.beta_t,
                                             other.beta2_t);
}
bool AdamOptimizerAttrs::operator<(AdamOptimizerAttrs const &other) const {
  return std::tie(this->alpha,
                  this->beta1,
                  this->beta2,
                  this->weight_decay,
                  this->alpha_t,
                  this->beta_t,
                  this->beta2_t) < std::tie(other.alpha,
                                            other.beta1,
                                            other.beta2,
                                            other.weight_decay,
                                            other.alpha_t,
                                            other.beta_t,
                                            other.beta2_t);
}
bool AdamOptimizerAttrs::operator>(AdamOptimizerAttrs const &other) const {
  return std::tie(this->alpha,
                  this->beta1,
                  this->beta2,
                  this->weight_decay,
                  this->alpha_t,
                  this->beta_t,
                  this->beta2_t) > std::tie(other.alpha,
                                            other.beta1,
                                            other.beta2,
                                            other.weight_decay,
                                            other.alpha_t,
                                            other.beta_t,
                                            other.beta2_t);
}
bool AdamOptimizerAttrs::operator<=(AdamOptimizerAttrs const &other) const {
  return std::tie(this->alpha,
                  this->beta1,
                  this->beta2,
                  this->weight_decay,
                  this->alpha_t,
                  this->beta_t,
                  this->beta2_t) <= std::tie(other.alpha,
                                             other.beta1,
                                             other.beta2,
                                             other.weight_decay,
                                             other.alpha_t,
                                             other.beta_t,
                                             other.beta2_t);
}
bool AdamOptimizerAttrs::operator>=(AdamOptimizerAttrs const &other) const {
  return std::tie(this->alpha,
                  this->beta1,
                  this->beta2,
                  this->weight_decay,
                  this->alpha_t,
                  this->beta_t,
                  this->beta2_t) >= std::tie(other.alpha,
                                             other.beta1,
                                             other.beta2,
                                             other.weight_decay,
                                             other.alpha_t,
                                             other.beta_t,
                                             other.beta2_t);
}
} // namespace FlexFlow

namespace std {
size_t hash<FlexFlow::AdamOptimizerAttrs>::operator()(
    FlexFlow::AdamOptimizerAttrs const &x) const {
  size_t result = 0;
  result ^=
      std::hash<double>{}(x.alpha) + 0x9e3779b9 + (result << 6) + (result >> 2);
  result ^=
      std::hash<double>{}(x.beta1) + 0x9e3779b9 + (result << 6) + (result >> 2);
  result ^=
      std::hash<double>{}(x.beta2) + 0x9e3779b9 + (result << 6) + (result >> 2);
  result ^= std::hash<double>{}(x.weight_decay) + 0x9e3779b9 + (result << 6) +
            (result >> 2);
  result ^= std::hash<double>{}(x.alpha_t) + 0x9e3779b9 + (result << 6) +
            (result >> 2);
  result ^= std::hash<double>{}(x.beta_t) + 0x9e3779b9 + (result << 6) +
            (result >> 2);
  result ^= std::hash<double>{}(x.beta2_t) + 0x9e3779b9 + (result << 6) +
            (result >> 2);
  return result;
}
} // namespace std

namespace nlohmann {
FlexFlow::AdamOptimizerAttrs
    adl_serializer<FlexFlow::AdamOptimizerAttrs>::from_json(json const &j) {
  return {j.at("alpha").template get<double>(),
          j.at("beta1").template get<double>(),
          j.at("beta2").template get<double>(),
          j.at("weight_decay").template get<double>(),
          j.at("alpha_t").template get<double>(),
          j.at("beta_t").template get<double>(),
          j.at("beta2_t").template get<double>()};
}
void adl_serializer<FlexFlow::AdamOptimizerAttrs>::to_json(
    json &j, FlexFlow::AdamOptimizerAttrs const &v) {
  j["__type"] = "AdamOptimizerAttrs";
  j["alpha"] = v.alpha;
  j["beta1"] = v.beta1;
  j["beta2"] = v.beta2;
  j["weight_decay"] = v.weight_decay;
  j["alpha_t"] = v.alpha_t;
  j["beta_t"] = v.beta_t;
  j["beta2_t"] = v.beta2_t;
}
} // namespace nlohmann

namespace rc {
Gen<FlexFlow::AdamOptimizerAttrs>
    Arbitrary<FlexFlow::AdamOptimizerAttrs>::arbitrary() {
  return gen::construct<FlexFlow::AdamOptimizerAttrs>(gen::arbitrary<double>(),
                                                      gen::arbitrary<double>(),
                                                      gen::arbitrary<double>(),
                                                      gen::arbitrary<double>(),
                                                      gen::arbitrary<double>(),
                                                      gen::arbitrary<double>(),
                                                      gen::arbitrary<double>());
}
} // namespace rc

namespace FlexFlow {
std::string format_as(AdamOptimizerAttrs const &x) {
  std::ostringstream oss;
  oss << "<AdamOptimizerAttrs";
  oss << " alpha=" << x.alpha;
  oss << " beta1=" << x.beta1;
  oss << " beta2=" << x.beta2;
  oss << " weight_decay=" << x.weight_decay;
  oss << " alpha_t=" << x.alpha_t;
  oss << " beta_t=" << x.beta_t;
  oss << " beta2_t=" << x.beta2_t;
  oss << ">";
  return oss.str();
}
std::ostream &operator<<(std::ostream &s, AdamOptimizerAttrs const &x) {
  return s << fmt::to_string(x);
}
} // namespace FlexFlow
