// THIS FILE WAS AUTO-GENERATED BY proj. DO NOT MODIFY IT!
// If you would like to modify this datatype, instead modify
// lib/pcg/include/pcg/device_id_t.variant.toml
/* proj-data
{
  "generated_from": "85870050c742b0159775399ec2be67e3"
}
*/

#ifndef _FLEXFLOW_LIB_PCG_INCLUDE_PCG_DEVICE_ID_T_DTG_H
#define _FLEXFLOW_LIB_PCG_INCLUDE_PCG_DEVICE_ID_T_DTG_H

#include "fmt/format.h"
#include "nlohmann/json.hpp"
#include "pcg/cpu_id_t.dtg.h"
#include "pcg/gpu_id_t.dtg.h"
#include <cstddef>
#include <functional>
#include <ostream>
#include <type_traits>
#include <variant>

namespace FlexFlow {
struct device_id_t {
  device_id_t() = delete;
  explicit device_id_t(::FlexFlow::gpu_id_t const &);
  explicit device_id_t(::FlexFlow::cpu_id_t const &);
  template <typename T>
  static constexpr bool IsPartOfdevice_id_t_v =
      std::is_same_v<T, ::FlexFlow::gpu_id_t> ||
      std::is_same_v<T, ::FlexFlow::cpu_id_t>;
  template <typename ReturnType, typename Visitor>
  ReturnType visit(Visitor &&v) const {
    switch (this->index()) {
      case 0: {
        ReturnType result = v(this->get<::FlexFlow::gpu_id_t>());
        return result;
      }
      case 1: {
        ReturnType result = v(this->get<::FlexFlow::cpu_id_t>());
        return result;
      }
      default: {
        throw std::runtime_error(fmt::format(
            "Unknown index {} for type device_id_t", this->index()));
      }
    }
  }
  template <typename ReturnType, typename Visitor>
  ReturnType visit(Visitor &&v) {
    switch (this->index()) {
      case 0: {
        ReturnType result = v(this->get<::FlexFlow::gpu_id_t>());
        return result;
      }
      case 1: {
        ReturnType result = v(this->get<::FlexFlow::cpu_id_t>());
        return result;
      }
      default: {
        throw std::runtime_error(fmt::format(
            "Unknown index {} for type device_id_t", this->index()));
      }
    }
  }
  template <typename T>
  bool has() const {
    static_assert(IsPartOfdevice_id_t_v<T>,
                  "device_id_t::has() expected one of [::FlexFlow::gpu_id_t, "
                  "::FlexFlow::cpu_id_t], received T");
    return std::holds_alternative<T>(this->raw_variant);
  }
  template <typename T>
  T const &get() const {
    static_assert(IsPartOfdevice_id_t_v<T>,
                  "device_id_t::get() expected one of [::FlexFlow::gpu_id_t, "
                  "::FlexFlow::cpu_id_t], received T");
    return std::get<T>(this->raw_variant);
  }
  template <typename T>
  T &get() {
    static_assert(IsPartOfdevice_id_t_v<T>,
                  "device_id_t::get() expected one of [::FlexFlow::gpu_id_t, "
                  "::FlexFlow::cpu_id_t], received T");
    return std::get<T>(this->raw_variant);
  }
  size_t index() const {
    return this->raw_variant.index();
  }
  bool operator==(device_id_t const &) const;
  bool operator!=(device_id_t const &) const;
  bool operator<(device_id_t const &) const;
  bool operator>(device_id_t const &) const;
  bool operator<=(device_id_t const &) const;
  bool operator>=(device_id_t const &) const;
  std::variant<::FlexFlow::gpu_id_t, ::FlexFlow::cpu_id_t> raw_variant;
};
} // namespace FlexFlow
namespace std {
template <>
struct hash<::FlexFlow::device_id_t> {
  size_t operator()(::FlexFlow::device_id_t const &) const;
};
} // namespace std
namespace nlohmann {
template <>
struct adl_serializer<::FlexFlow::device_id_t> {
  static ::FlexFlow::device_id_t from_json(json const &);
  static void to_json(json &, ::FlexFlow::device_id_t const &);
};
} // namespace nlohmann
namespace FlexFlow {
std::string format_as(::FlexFlow::device_id_t const &);
std::ostream &operator<<(std::ostream &, ::FlexFlow::device_id_t const &);
} // namespace FlexFlow

#endif // _FLEXFLOW_LIB_PCG_INCLUDE_PCG_DEVICE_ID_T_DTG_H
