#ifndef UTILS_GRAPH_INCLUDE_UTILS_GRAPH_DIGRAPH
#define UTILS_GRAPH_INCLUDE_UTILS_GRAPH_DIGRAPH

#include "cow_ptr_t.h"
#include "digraph_interfaces.h"
#include "node.h"
#include "utils/optional.h"
#include "utils/unique.h"
#include "utils/visitable.h"
#include <unordered_set>

namespace FlexFlow {

struct DiGraphView : virtual public GraphView {
public:
  using Edge = DirectedEdge;
  using EdgeQuery = DirectedEdgeQuery;

  DiGraphView(DiGraphView const &) = default;
  DiGraphView &operator=(DiGraphView const &) = default;

  std::unordered_set<Node> query_nodes(NodeQuery const &) const;
  std::unordered_set<Edge> query_edges(EdgeQuery const &) const;

  template <typename T, typename... Args>
  static typename std::enable_if<std::is_base_of<IDiGraphView, T>::value,
                                 DiGraphView>::type
      create(Args &&...args) {
    return DiGraphView(make_cow_ptr<T>(std::forward<Args>(args)...));
  }

protected:
  using GraphView::GraphView;

private:
  IDiGraphView const &get_ptr() const;

  friend struct GraphInternal;
};
CHECK_WELL_BEHAVED_VALUE_TYPE_NO_EQ(DiGraphView);

struct DiGraph : virtual DiGraphView {
public:
  using Edge = DirectedEdge;
  using EdgeQuery = DirectedEdgeQuery;

  DiGraph(DiGraph const &) = default;
  DiGraph &operator=(DiGraph const &) = default;

  Node add_node();
  void add_node_unsafe(Node const &);
  void remove_node_unsafe(Node const &);

  void add_edge(Edge const &);
  void remove_edge(Edge const &);

  std::unordered_set<Node> query_nodes(NodeQuery const &) const;
  std::unordered_set<Edge> query_edges(EdgeQuery const &) const;

  template <typename T>
  static typename std::enable_if<std::is_base_of<IDiGraph, T>::value,
                                 DiGraph>::type
      create() {
    return DiGraph(make_cow_ptr<T>());
  }

protected:
  using DiGraphView::DiGraphView;

private:
  IDiGraph &get_ptr();
  IDiGraph const &get_ptr() const;

  friend struct GraphInternal;
};
CHECK_WELL_BEHAVED_VALUE_TYPE_NO_EQ(DiGraph);

} // namespace FlexFlow

#endif
