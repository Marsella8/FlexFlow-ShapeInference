// THIS FILE WAS AUTO-GENERATED BY proj. DO NOT MODIFY IT!
// If you would like to modify this datatype, instead modify
// lib/op-attrs/include/op-attrs/replica_parallel_dim.struct.toml
/* proj-data
{
  "generated_from": "f501393070c8d55a05c43dd73a81a8d7"
}
*/

#include "op-attrs/replica_parallel_dim.dtg.h"

#include "op-attrs/replica_type.dtg.h"
#include <sstream>

namespace FlexFlow {
ReplicaParallelDim::ReplicaParallelDim(
    int const &degree, ::FlexFlow::ReplicaType const &replica_type)
    : degree(degree), replica_type(replica_type) {}
bool ReplicaParallelDim::operator==(ReplicaParallelDim const &other) const {
  return std::tie(this->degree, this->replica_type) ==
         std::tie(other.degree, other.replica_type);
}
bool ReplicaParallelDim::operator!=(ReplicaParallelDim const &other) const {
  return std::tie(this->degree, this->replica_type) !=
         std::tie(other.degree, other.replica_type);
}
bool ReplicaParallelDim::operator<(ReplicaParallelDim const &other) const {
  return std::tie(this->degree, this->replica_type) <
         std::tie(other.degree, other.replica_type);
}
bool ReplicaParallelDim::operator>(ReplicaParallelDim const &other) const {
  return std::tie(this->degree, this->replica_type) >
         std::tie(other.degree, other.replica_type);
}
bool ReplicaParallelDim::operator<=(ReplicaParallelDim const &other) const {
  return std::tie(this->degree, this->replica_type) <=
         std::tie(other.degree, other.replica_type);
}
bool ReplicaParallelDim::operator>=(ReplicaParallelDim const &other) const {
  return std::tie(this->degree, this->replica_type) >=
         std::tie(other.degree, other.replica_type);
}
} // namespace FlexFlow

namespace std {
size_t hash<FlexFlow::ReplicaParallelDim>::operator()(
    FlexFlow::ReplicaParallelDim const &x) const {
  size_t result = 0;
  result ^=
      std::hash<int>{}(x.degree) + 0x9e3779b9 + (result << 6) + (result >> 2);
  result ^= std::hash<::FlexFlow::ReplicaType>{}(x.replica_type) + 0x9e3779b9 +
            (result << 6) + (result >> 2);
  return result;
}
} // namespace std

namespace nlohmann {
FlexFlow::ReplicaParallelDim
    adl_serializer<FlexFlow::ReplicaParallelDim>::from_json(json const &j) {
  return {j.at("degree").template get<int>(),
          j.at("replica_type").template get<::FlexFlow::ReplicaType>()};
}
void adl_serializer<FlexFlow::ReplicaParallelDim>::to_json(
    json &j, FlexFlow::ReplicaParallelDim const &v) {
  j["__type"] = "ReplicaParallelDim";
  j["degree"] = v.degree;
  j["replica_type"] = v.replica_type;
}
} // namespace nlohmann

namespace rc {
Gen<FlexFlow::ReplicaParallelDim>
    Arbitrary<FlexFlow::ReplicaParallelDim>::arbitrary() {
  return gen::construct<FlexFlow::ReplicaParallelDim>(
      gen::arbitrary<int>(), gen::arbitrary<::FlexFlow::ReplicaType>());
}
} // namespace rc

namespace FlexFlow {
std::string format_as(ReplicaParallelDim const &x) {
  std::ostringstream oss;
  oss << "<ReplicaParallelDim";
  oss << " degree=" << x.degree;
  oss << " replica_type=" << x.replica_type;
  oss << ">";
  return oss.str();
}
std::ostream &operator<<(std::ostream &s, ReplicaParallelDim const &x) {
  return s << fmt::to_string(x);
}
} // namespace FlexFlow
