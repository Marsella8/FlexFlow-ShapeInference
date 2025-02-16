#ifndef _FLEXFLOW_UTILS_INCLUDE_UTILS_GRAPH_LABELLED_NODE_LABELLED_H
#define _FLEXFLOW_UTILS_INCLUDE_UTILS_GRAPH_LABELLED_NODE_LABELLED_H

#include "node_labelled_interfaces.h"
#include "utils/graph/multidigraph.h"

namespace FlexFlow {

template <typename NodeLabel>
struct NodeLabelledMultiDiGraphView : virtual public MultiDiGraphView {
private:
  using Interface = INodeLabelledMultiDiGraphView<NodeLabel>;

public:
  NodeLabelledMultiDiGraphView(NodeLabelledMultiDiGraphView const &) = default;
  NodeLabelledMultiDiGraphView &
      operator=(NodeLabelledMultiDiGraphView const &) = default;

  NodeLabel const &at(Node const &n) const {
    return get_ptr().at(n);
  }

  std::unordered_set<Node> query_nodes(NodeQuery const &q) const {
    return get_ptr().query_nodes(q);
  }

  std::unordered_set<MultiDiEdge> query_edges(MultiDiEdgeQuery const &q) const {
    return get_ptr().query_edges(q);
  }

  template <typename BaseImpl, typename... Args>
  static typename std::enable_if<std::is_base_of<Interface, BaseImpl>::value,
                                 NodeLabelledMultiDiGraphView>::type
      create(Args &&...args) {
    return NodeLabelledMultiDiGraphView(
        make_cow_ptr<BaseImpl>(std::forward<Args>(args)...));
  }

protected:
  using MultiDiGraphView::MultiDiGraphView;

private:
  Interface const &get_ptr() const {
    return *std::dynamic_pointer_cast<Interface const>(GraphView::ptr.get());
  }
};
CHECK_WELL_BEHAVED_VALUE_TYPE_NO_EQ(NodeLabelledMultiDiGraphView<int>);

template <typename NodeLabel>
struct NodeLabelledMultiDiGraph
    : virtual NodeLabelledMultiDiGraphView<NodeLabel> {
private:
  using Interface = IMultiDiGraph;

public:
  NodeLabelledMultiDiGraph(NodeLabelledMultiDiGraph const &) = default;
  NodeLabelledMultiDiGraph &
      operator=(NodeLabelledMultiDiGraph const &) = default;

  NodeLabel const &at(Node const &n) const {
    return this->get_ptr().at(n);
  }

  NodeLabel &at(Node const &n) {
    return this->get_ptr().at(n);
  }

  std::unordered_set<Node> query_nodes(NodeQuery const &q) const {
    return this->get_ptr().query_nodes();
  }

  std::unordered_set<MultiDiEdge> query_edges(MultiDiEdge const &q) const {
    return this->get_ptr().query_edges();
  }

  Node add_node(NodeLabel const &l) {
    return this->get_ptr().add_node(l);
  }

  NodePort add_node_port() {
    return this->get_ptr().add_node_port();
  }

  void add_edge(MultiDiEdge const &e) {
    return this->get_ptr().add_edge(e);
  }

  template <typename GraphImpl>
  static typename std::enable_if<std::is_base_of<Interface, GraphImpl>::value,
                                 NodeLabelledMultiDiGraph>::type
      create() {
    return NodeLabelledMultiDiGraph(make_cow_ptr<GraphImpl>());
  }

protected:
  NodeLabelledMultiDiGraph(cow_ptr_t<Interface> ptr) : GraphView(ptr) {}

  Interface &get_ptr() {
    return *std::dynamic_pointer_cast<Interface>(GraphView::ptr.get_mutable());
  }

  Interface const &get_ptr() const {
    return *std::dynamic_pointer_cast<Interface const>(GraphView::ptr.get());
  }
};
CHECK_WELL_BEHAVED_VALUE_TYPE_NO_EQ(NodeLabelledMultiDiGraph<int>);

} // namespace FlexFlow

#endif
