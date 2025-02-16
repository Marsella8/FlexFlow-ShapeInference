#ifndef _FLEXFLOW_UTILS_INCLUDE_UTILS_GRAPH_LABELLED_VIEWS_H
#define _FLEXFLOW_UTILS_INCLUDE_UTILS_GRAPH_LABELLED_VIEWS_H

#include "node_labelled.h"
#include "output_labelled_open.h"
#include "standard_labelled.h"

namespace FlexFlow {

template <typename NodeLabel>
struct NodeLabelledMultiDiSubgraphView
    : public INodeLabelledMultiDiGraphView<NodeLabel> {};

template <typename NodeLabel, typename EdgeLabel>
struct LabelledMultiDiSubgraphView
    : public ILabelledMultiDiGraphView<NodeLabel, EdgeLabel> {
public:
  LabelledMultiDiSubgraphView() = delete;
  template <typename InputLabel, typename OutputLabel>
  explicit LabelledMultiDiSubgraphView(
      ILabelledMultiDiGraphView<NodeLabel, EdgeLabel> const &,
      std::unordered_set<Node> const &);
};

template <typename NodeLabel, typename OutputLabel>
struct ViewMultiDiGraphAsOutputLabelled
    : public IOutputLabelledMultiDiGraphView<NodeLabel, OutputLabel> {
public:
  ViewMultiDiGraphAsOutputLabelled() = delete;
  explicit ViewMultiDiGraphAsOutputLabelled(
      MultiDiGraphView const &g,
      std::function<NodeLabel(Node const &)> const &node_label,
      std::function<OutputLabel(MultiDiOutput const &)> const &output_label)
      : g(g), node_label(node_label), output_label(output_label) {}

  virtual std::unordered_set<Node>
      query_nodes(NodeQuery const &q) const override {
    return g.query_nodes(q);
  }

  // virtual std::unordered_set<DirectedEdge>
  //     query_edges(DirectedEdgeQuery const &q) const override {
  //   return g.query_edges(q);
  // }

  std::unordered_set<MultiDiEdge> query_edges(MultiDiEdgeQuery const &q) const {
    return g.query_edges(q);
  }

  NodeLabel const &at(Node const &n) const {
    return node_label(n);
  }

  OutputLabel &at(MultiDiOutput const &o) {
    return output_label(o);
  }

  OutputLabel const &at(MultiDiOutput const &o) const override {
    return output_label(o);
  }

  ViewMultiDiGraphAsOutputLabelled *clone() const {
    return new ViewMultiDiGraphAsOutputLabelled(g, node_label, output_label);
  }

private:
  MultiDiGraphView g;
  std::function<NodeLabel(Node const &)> node_label;
  std::function<OutputLabel(MultiDiOutput const &)> output_label;
};

CHECK_NOT_ABSTRACT(ViewMultiDiGraphAsOutputLabelled<test_types::hash_cmp,
                                                    test_types::hash_cmp>);

template <typename Impl, typename NodeLabel, typename OutputLabel>
Impl materialize_output_labelled_multidigraph_view(
    OutputLabelledMultiDiGraphView<NodeLabel, OutputLabel> const &g) {
  Impl result;
  for (Node const &n : get_nodes(g)) {
    result.add_node_unsafe(n);
    result.at(n) = g.at(n);
  }
  for (auto const &e : get_edges(g)) {
    result.add_edge(e);
  }
  for (MultiDiOutput const &o : get_outputs(g)) {
    result.add_output(o, g.at(o));
  }
  return result;
}

template <typename Impl,
          typename NodeLabel,
          typename OutputLabel,
          typename NodeLabelImpl,
          typename InputLabelImpl,
          typename OutputLabelImpl>
OutputLabelledOpenMultiDiGraph<NodeLabel, OutputLabel>
    materialize_output_labelled_multidigraph_view(
        OutputLabelledOpenMultiDiGraphView<NodeLabel, OutputLabel> const &g) {
  OutputLabelledOpenMultiDiGraph<NodeLabel, OutputLabel> result =
      OutputLabelledOpenMultiDiGraph<NodeLabel, OutputLabel>::template create<
          Impl,
          NodeLabelImpl,
          InputLabelImpl,
          OutputLabelImpl>();
  for (Node const &n : get_nodes(g)) {
    result.add_node_unsafe(n, g.at(n));
  }
  for (OpenMultiDiEdge const &e : get_edges(g)) {
    result.add_edge(e);
    if (is_input_edge(e)) {
      InputMultiDiEdge input_edge = get<InputMultiDiEdge>(e);
      result.add_label(input_edge, g.at(input_edge));
    } else {
      MultiDiOutput output =
          is_standard_edge(e)
              ? static_cast<MultiDiOutput>(get<MultiDiEdge>(e))
              : static_cast<MultiDiOutput>(get<OutputMultiDiEdge>(e));
      auto tensor = g.at(output);
      result.add_label(output, tensor);
    }
  }
  return result;
}

} // namespace FlexFlow

#endif
