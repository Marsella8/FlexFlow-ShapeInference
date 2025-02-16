// THIS FILE WAS AUTO-GENERATED BY proj. DO NOT MODIFY IT!
// If you would like to modify this datatype, instead modify
// lib/substitutions/include/substitutions/operator_pattern/operator_attribute_constraint.struct.toml
/* proj-data
{
  "generated_from": "7867bd0f403866c13417171bb5ec364c"
}
*/

#ifndef _FLEXFLOW_LIB_SUBSTITUTIONS_INCLUDE_SUBSTITUTIONS_OPERATOR_PATTERN_OPERATOR_ATTRIBUTE_CONSTRAINT_DTG_H
#define _FLEXFLOW_LIB_SUBSTITUTIONS_INCLUDE_SUBSTITUTIONS_OPERATOR_PATTERN_OPERATOR_ATTRIBUTE_CONSTRAINT_DTG_H

#include "fmt/format.h"
#include "nlohmann/json.hpp"
#include "substitutions/constraint_type.dtg.h"
#include "substitutions/operator_pattern/operator_attribute_expr.dtg.h"
#include "substitutions/operator_pattern/operator_attribute_value.dtg.h"
#include <functional>
#include <ostream>
#include <tuple>

namespace FlexFlow {
struct OperatorAttributeConstraint {
  OperatorAttributeConstraint() = delete;
  OperatorAttributeConstraint(
      ::FlexFlow::ConstraintType const &constraint_type,
      ::FlexFlow::OperatorAttributeExpr const &attribute_expr,
      ::FlexFlow::OperatorAttributeValue const &attribute_value);

  bool operator==(OperatorAttributeConstraint const &) const;
  bool operator!=(OperatorAttributeConstraint const &) const;
  bool operator<(OperatorAttributeConstraint const &) const;
  bool operator>(OperatorAttributeConstraint const &) const;
  bool operator<=(OperatorAttributeConstraint const &) const;
  bool operator>=(OperatorAttributeConstraint const &) const;
  ::FlexFlow::ConstraintType constraint_type;
  ::FlexFlow::OperatorAttributeExpr attribute_expr;
  ::FlexFlow::OperatorAttributeValue attribute_value;
};
} // namespace FlexFlow

namespace std {
template <>
struct hash<FlexFlow::OperatorAttributeConstraint> {
  size_t operator()(FlexFlow::OperatorAttributeConstraint const &) const;
};
} // namespace std

namespace nlohmann {
template <>
struct adl_serializer<FlexFlow::OperatorAttributeConstraint> {
  static FlexFlow::OperatorAttributeConstraint from_json(json const &);
  static void to_json(json &, FlexFlow::OperatorAttributeConstraint const &);
};
} // namespace nlohmann

namespace FlexFlow {
std::string format_as(OperatorAttributeConstraint const &);
std::ostream &operator<<(std::ostream &, OperatorAttributeConstraint const &);
} // namespace FlexFlow

#endif // _FLEXFLOW_LIB_SUBSTITUTIONS_INCLUDE_SUBSTITUTIONS_OPERATOR_PATTERN_OPERATOR_ATTRIBUTE_CONSTRAINT_DTG_H
