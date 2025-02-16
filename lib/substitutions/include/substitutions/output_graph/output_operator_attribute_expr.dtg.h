// THIS FILE WAS AUTO-GENERATED BY proj. DO NOT MODIFY IT!
// If you would like to modify this datatype, instead modify
// lib/substitutions/include/substitutions/output_graph/output_operator_attribute_expr.variant.toml
/* proj-data
{
  "generated_from": "89ebf777a5b909eef78ab5a5a177e041"
}
*/

#ifndef _FLEXFLOW_LIB_SUBSTITUTIONS_INCLUDE_SUBSTITUTIONS_OUTPUT_GRAPH_OUTPUT_OPERATOR_ATTRIBUTE_EXPR_DTG_H
#define _FLEXFLOW_LIB_SUBSTITUTIONS_INCLUDE_SUBSTITUTIONS_OUTPUT_GRAPH_OUTPUT_OPERATOR_ATTRIBUTE_EXPR_DTG_H

#include "fmt/format.h"
#include "substitutions/output_graph/attr_constant.dtg.h"
#include "substitutions/output_graph/output_operator_attr_access.dtg.h"
#include <cstddef>
#include <functional>
#include <ostream>
#include <type_traits>
#include <variant>

namespace FlexFlow {
struct OutputOperatorAttributeExpr {
  OutputOperatorAttributeExpr() = delete;
  explicit OutputOperatorAttributeExpr(
      ::FlexFlow::OutputOperatorAttrAccess const &);
  explicit OutputOperatorAttributeExpr(::FlexFlow::AttrConstant const &);
  template <typename T>
  static constexpr bool IsPartOfOutputOperatorAttributeExpr_v =
      std::is_same_v<T, ::FlexFlow::OutputOperatorAttrAccess> ||
      std::is_same_v<T, ::FlexFlow::AttrConstant>;
  template <typename ReturnType, typename Visitor>
  ReturnType visit(Visitor &&v) const {
    switch (this->index()) {
      case 0: {
        ReturnType result =
            v(this->get<::FlexFlow::OutputOperatorAttrAccess>());
        return result;
      }
      case 1: {
        ReturnType result = v(this->get<::FlexFlow::AttrConstant>());
        return result;
      }
      default: {
        throw std::runtime_error(
            fmt::format("Unknown index {} for type OutputOperatorAttributeExpr",
                        this->index()));
      }
    }
  }
  template <typename ReturnType, typename Visitor>
  ReturnType visit(Visitor &&v) {
    switch (this->index()) {
      case 0: {
        ReturnType result =
            v(this->get<::FlexFlow::OutputOperatorAttrAccess>());
        return result;
      }
      case 1: {
        ReturnType result = v(this->get<::FlexFlow::AttrConstant>());
        return result;
      }
      default: {
        throw std::runtime_error(
            fmt::format("Unknown index {} for type OutputOperatorAttributeExpr",
                        this->index()));
      }
    }
  }
  template <typename T>
  bool has() const {
    static_assert(IsPartOfOutputOperatorAttributeExpr_v<T>,
                  "OutputOperatorAttributeExpr::has() expected one of "
                  "[::FlexFlow::OutputOperatorAttrAccess, "
                  "::FlexFlow::AttrConstant], received T");
    return std::holds_alternative<T>(this->raw_variant);
  }
  template <typename T>
  T const &get() const {
    static_assert(IsPartOfOutputOperatorAttributeExpr_v<T>,
                  "OutputOperatorAttributeExpr::get() expected one of "
                  "[::FlexFlow::OutputOperatorAttrAccess, "
                  "::FlexFlow::AttrConstant], received T");
    return std::get<T>(this->raw_variant);
  }
  template <typename T>
  T &get() {
    static_assert(IsPartOfOutputOperatorAttributeExpr_v<T>,
                  "OutputOperatorAttributeExpr::get() expected one of "
                  "[::FlexFlow::OutputOperatorAttrAccess, "
                  "::FlexFlow::AttrConstant], received T");
    return std::get<T>(this->raw_variant);
  }
  size_t index() const {
    return this->raw_variant.index();
  }
  bool operator==(OutputOperatorAttributeExpr const &) const;
  bool operator!=(OutputOperatorAttributeExpr const &) const;
  bool operator<(OutputOperatorAttributeExpr const &) const;
  bool operator>(OutputOperatorAttributeExpr const &) const;
  bool operator<=(OutputOperatorAttributeExpr const &) const;
  bool operator>=(OutputOperatorAttributeExpr const &) const;
  std::variant<::FlexFlow::OutputOperatorAttrAccess, ::FlexFlow::AttrConstant>
      raw_variant;
};
} // namespace FlexFlow
namespace std {
template <>
struct hash<::FlexFlow::OutputOperatorAttributeExpr> {
  size_t operator()(::FlexFlow::OutputOperatorAttributeExpr const &) const;
};
} // namespace std
namespace FlexFlow {
std::string format_as(::FlexFlow::OutputOperatorAttributeExpr const &);
std::ostream &operator<<(std::ostream &,
                         ::FlexFlow::OutputOperatorAttributeExpr const &);
} // namespace FlexFlow

#endif // _FLEXFLOW_LIB_SUBSTITUTIONS_INCLUDE_SUBSTITUTIONS_OUTPUT_GRAPH_OUTPUT_OPERATOR_ATTRIBUTE_EXPR_DTG_H
