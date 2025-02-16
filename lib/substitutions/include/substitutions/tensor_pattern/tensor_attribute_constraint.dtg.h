// THIS FILE WAS AUTO-GENERATED BY proj. DO NOT MODIFY IT!
// If you would like to modify this datatype, instead modify
// lib/substitutions/include/substitutions/tensor_pattern/tensor_attribute_constraint.struct.toml
/* proj-data
{
  "generated_from": "29dbf81668bc864b06af52261060335e"
}
*/

#ifndef _FLEXFLOW_LIB_SUBSTITUTIONS_INCLUDE_SUBSTITUTIONS_TENSOR_PATTERN_TENSOR_ATTRIBUTE_CONSTRAINT_DTG_H
#define _FLEXFLOW_LIB_SUBSTITUTIONS_INCLUDE_SUBSTITUTIONS_TENSOR_PATTERN_TENSOR_ATTRIBUTE_CONSTRAINT_DTG_H

#include "fmt/format.h"
#include "nlohmann/json.hpp"
#include "substitutions/constraint_type.dtg.h"
#include "substitutions/tensor_pattern/tensor_attribute_expr.dtg.h"
#include "substitutions/tensor_pattern/tensor_attribute_value.dtg.h"
#include <functional>
#include <ostream>
#include <tuple>

namespace FlexFlow {
struct TensorAttributeConstraint {
  TensorAttributeConstraint() = delete;
  TensorAttributeConstraint(
      ::FlexFlow::ConstraintType const &constraint_type,
      ::FlexFlow::TensorAttributeExpr const &attribute_expr,
      ::FlexFlow::TensorAttributeValue const &attribute_value);

  bool operator==(TensorAttributeConstraint const &) const;
  bool operator!=(TensorAttributeConstraint const &) const;
  bool operator<(TensorAttributeConstraint const &) const;
  bool operator>(TensorAttributeConstraint const &) const;
  bool operator<=(TensorAttributeConstraint const &) const;
  bool operator>=(TensorAttributeConstraint const &) const;
  ::FlexFlow::ConstraintType constraint_type;
  ::FlexFlow::TensorAttributeExpr attribute_expr;
  ::FlexFlow::TensorAttributeValue attribute_value;
};
} // namespace FlexFlow

namespace std {
template <>
struct hash<FlexFlow::TensorAttributeConstraint> {
  size_t operator()(FlexFlow::TensorAttributeConstraint const &) const;
};
} // namespace std

namespace nlohmann {
template <>
struct adl_serializer<FlexFlow::TensorAttributeConstraint> {
  static FlexFlow::TensorAttributeConstraint from_json(json const &);
  static void to_json(json &, FlexFlow::TensorAttributeConstraint const &);
};
} // namespace nlohmann

namespace FlexFlow {
std::string format_as(TensorAttributeConstraint const &);
std::ostream &operator<<(std::ostream &, TensorAttributeConstraint const &);
} // namespace FlexFlow

#endif // _FLEXFLOW_LIB_SUBSTITUTIONS_INCLUDE_SUBSTITUTIONS_TENSOR_PATTERN_TENSOR_ATTRIBUTE_CONSTRAINT_DTG_H
