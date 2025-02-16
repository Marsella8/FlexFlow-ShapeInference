// THIS FILE WAS AUTO-GENERATED BY proj. DO NOT MODIFY IT!
// If you would like to modify this datatype, instead modify
// lib/op-attrs/include/op-attrs/shard_parallel_dim.struct.toml
/* proj-data
{
  "generated_from": "18e074f80556d90b9b27d6515bbf9071"
}
*/

#include "op-attrs/shard_parallel_dim.dtg.h"

#include <sstream>

namespace FlexFlow {
ShardParallelDim::ShardParallelDim(size_t const &size, int const &degree)
    : size(size), degree(degree) {}
bool ShardParallelDim::operator==(ShardParallelDim const &other) const {
  return std::tie(this->size, this->degree) ==
         std::tie(other.size, other.degree);
}
bool ShardParallelDim::operator!=(ShardParallelDim const &other) const {
  return std::tie(this->size, this->degree) !=
         std::tie(other.size, other.degree);
}
bool ShardParallelDim::operator<(ShardParallelDim const &other) const {
  return std::tie(this->size, this->degree) <
         std::tie(other.size, other.degree);
}
bool ShardParallelDim::operator>(ShardParallelDim const &other) const {
  return std::tie(this->size, this->degree) >
         std::tie(other.size, other.degree);
}
bool ShardParallelDim::operator<=(ShardParallelDim const &other) const {
  return std::tie(this->size, this->degree) <=
         std::tie(other.size, other.degree);
}
bool ShardParallelDim::operator>=(ShardParallelDim const &other) const {
  return std::tie(this->size, this->degree) >=
         std::tie(other.size, other.degree);
}
} // namespace FlexFlow

namespace std {
size_t hash<FlexFlow::ShardParallelDim>::operator()(
    FlexFlow::ShardParallelDim const &x) const {
  size_t result = 0;
  result ^=
      std::hash<size_t>{}(x.size) + 0x9e3779b9 + (result << 6) + (result >> 2);
  result ^=
      std::hash<int>{}(x.degree) + 0x9e3779b9 + (result << 6) + (result >> 2);
  return result;
}
} // namespace std

namespace nlohmann {
FlexFlow::ShardParallelDim
    adl_serializer<FlexFlow::ShardParallelDim>::from_json(json const &j) {
  return {j.at("size").template get<size_t>(),
          j.at("degree").template get<int>()};
}
void adl_serializer<FlexFlow::ShardParallelDim>::to_json(
    json &j, FlexFlow::ShardParallelDim const &v) {
  j["__type"] = "ShardParallelDim";
  j["size"] = v.size;
  j["degree"] = v.degree;
}
} // namespace nlohmann

namespace rc {
Gen<FlexFlow::ShardParallelDim>
    Arbitrary<FlexFlow::ShardParallelDim>::arbitrary() {
  return gen::construct<FlexFlow::ShardParallelDim>(gen::arbitrary<size_t>(),
                                                    gen::arbitrary<int>());
}
} // namespace rc

namespace FlexFlow {
std::string format_as(ShardParallelDim const &x) {
  std::ostringstream oss;
  oss << "<ShardParallelDim";
  oss << " size=" << x.size;
  oss << " degree=" << x.degree;
  oss << ">";
  return oss.str();
}
std::ostream &operator<<(std::ostream &s, ShardParallelDim const &x) {
  return s << fmt::to_string(x);
}
} // namespace FlexFlow
