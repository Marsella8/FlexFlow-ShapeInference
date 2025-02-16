// THIS FILE WAS AUTO-GENERATED BY proj. DO NOT MODIFY IT!
// If you would like to modify this datatype, instead modify
// lib/pcg/include/pcg/gpu_id_t.struct.toml
/* proj-data
{
  "generated_from": "022355e43f43141d332be50ea3080ee2"
}
*/

#include "pcg/gpu_id_t.dtg.h"

#include <sstream>

namespace FlexFlow {
gpu_id_t::gpu_id_t(int const &gpu_index) : gpu_index(gpu_index) {}
bool gpu_id_t::operator==(gpu_id_t const &other) const {
  return std::tie(this->gpu_index) == std::tie(other.gpu_index);
}
bool gpu_id_t::operator!=(gpu_id_t const &other) const {
  return std::tie(this->gpu_index) != std::tie(other.gpu_index);
}
bool gpu_id_t::operator<(gpu_id_t const &other) const {
  return std::tie(this->gpu_index) < std::tie(other.gpu_index);
}
bool gpu_id_t::operator>(gpu_id_t const &other) const {
  return std::tie(this->gpu_index) > std::tie(other.gpu_index);
}
bool gpu_id_t::operator<=(gpu_id_t const &other) const {
  return std::tie(this->gpu_index) <= std::tie(other.gpu_index);
}
bool gpu_id_t::operator>=(gpu_id_t const &other) const {
  return std::tie(this->gpu_index) >= std::tie(other.gpu_index);
}
} // namespace FlexFlow

namespace std {
size_t hash<FlexFlow::gpu_id_t>::operator()(FlexFlow::gpu_id_t const &x) const {
  size_t result = 0;
  result ^= std::hash<int>{}(x.gpu_index) + 0x9e3779b9 + (result << 6) +
            (result >> 2);
  return result;
}
} // namespace std

namespace nlohmann {
FlexFlow::gpu_id_t
    adl_serializer<FlexFlow::gpu_id_t>::from_json(json const &j) {
  return {j.at("gpu_index").template get<int>()};
}
void adl_serializer<FlexFlow::gpu_id_t>::to_json(json &j,
                                                 FlexFlow::gpu_id_t const &v) {
  j["__type"] = "gpu_id_t";
  j["gpu_index"] = v.gpu_index;
}
} // namespace nlohmann

namespace rc {
Gen<FlexFlow::gpu_id_t> Arbitrary<FlexFlow::gpu_id_t>::arbitrary() {
  return gen::construct<FlexFlow::gpu_id_t>(gen::arbitrary<int>());
}
} // namespace rc

namespace FlexFlow {
std::string format_as(gpu_id_t const &x) {
  std::ostringstream oss;
  oss << "<gpu_id_t";
  oss << " gpu_index=" << x.gpu_index;
  oss << ">";
  return oss.str();
}
std::ostream &operator<<(std::ostream &s, gpu_id_t const &x) {
  return s << fmt::to_string(x);
}
} // namespace FlexFlow
