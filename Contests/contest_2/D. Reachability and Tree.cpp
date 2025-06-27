#include <iostream>
#include <vector>
#include <queue>

// A simple struct for the undirected graph to keep the main logic clean.
struct UndirectedGraph {
    int n;
    std::vector<std::vector<int>> adj;
    UndirectedGraph(int size) : n(size), adj(size + 1) {}
};

// A struct to build and print the final directed graph.
struct DirectedGraph {
    std::vector<std::pair<int, int>> edges;
    void add_edge(int u, int v) {
        edges.push_back({u, v});
    }
    void print() {
        std::cout << "YES\n";
        for (const auto& edge : edges) {
            std::cout << edge.first << " " << edge.second << "\n";
        }
    }
};

void solve() {
    int n;
    std::cin >> n;
    UndirectedGraph g(n);
    for (int i = 0; i < n - 1; ++i) {
        int u, v;
        std::cin >> u >> v;
        g.adj[u].push_back(v);
        g.adj[v].push_back(u);
    }

    // 1. Find a "bridge" node 'w' with degree 2.
    int w = -1;
    for (int i = 1; i <= n; ++i) {
        if (g.adj[i].size() == 2) {
            w = i;
            break;
        }
    }

    // 2. If no such node exists, a solution is impossible.
    if (w == -1) {
        std::cout << "NO\n";
        return;
    }

    DirectedGraph result;
    
    // 3. Orient the core path z -> w -> u.
    int z = g.adj[w][0];
    int u = g.adj[w][1];
    result.add_edge(z, w);
    result.add_edge(w, u);

    // Keep track of visited nodes to handle the remaining components separately.
    std::vector<bool> visited(n + 1, false);
    visited[w] = true;

    // 4. Traverse from 'z' to form an OUT-TREE (all paths flow away).
    std::queue<int> q_z_side;
    q_z_side.push(z);
    visited[z] = true;
    while (!q_z_side.empty()) {
        int parent = q_z_side.front();
        q_z_side.pop();
        for (int child : g.adj[parent]) {
            if (!visited[child]) {
                visited[child] = true;
                result.add_edge(parent, child); // Orient parent -> child
                q_z_side.push(child);
            }
        }
    }

    // 5. Traverse from 'u' to form an IN-TREE (all paths flow towards).
    std::queue<int> q_u_side;
    q_u_side.push(u);
    visited[u] = true;
    while (!q_u_side.empty()) {
        int parent_in_bfs = q_u_side.front();
        q_u_side.pop();
        for (int child_in_bfs : g.adj[parent_in_bfs]) {
            if (!visited[child_in_bfs]) {
                visited[child_in_bfs] = true;
                result.add_edge(child_in_bfs, parent_in_bfs); // Orient child -> parent
                q_u_side.push(child_in_bfs);
            }
        }
    }

    result.print();
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}