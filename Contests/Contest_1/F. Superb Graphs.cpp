#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

struct DSU {
    std::vector<int> parent;
    DSU(int n) {
        parent.resize(n);
        std::iota(parent.begin(), parent.end(), 0);
    }
    int find(int i) {
        if (parent[i] == i)
            return i;
        return parent[i] = find(parent[i]);
    }
    void unite(int i, int j) {
        int root_i = find(i);
        int root_j = find(j);
        if (root_i != root_j) {
            parent[root_i] = root_j;
        }
    }
};

struct TwoSAT {
    int num_vars;
    std::vector<std::vector<int>> adj, rev_adj;
    std::vector<bool> visited;
    std::vector<int> order, component;

    TwoSAT(int n) : num_vars(n), adj(2 * n), rev_adj(2 * n) {}

    void add_clause(int u_lit, int v_lit) {
        adj[u_lit ^ 1].push_back(v_lit);
        adj[v_lit ^ 1].push_back(u_lit);
        rev_adj[v_lit].push_back(u_lit ^ 1);
        rev_adj[u_lit].push_back(v_lit ^ 1);
    }

    bool solve() {
        visited.assign(2 * num_vars, false);
        order.clear();
        for (int i = 0; i < 2 * num_vars; ++i) {
            if (!visited[i]) {
                dfs1(i);
            }
        }

        component.assign(2 * num_vars, -1);
        int c = 0;
        std::reverse(order.begin(), order.end());
        for (int u : order) {
            if (component[u] == -1) {
                dfs2(u, c++);
            }
        }

        for (int i = 0; i < num_vars; ++i) {
            if (component[2 * i] == component[2 * i + 1]) {
                return false;
            }
        }
        return true;
    }

private:
    void dfs1(int u) {
        visited[u] = true;
        for (int v : adj[u]) {
            if (!visited[v]) {
                dfs1(v);
            }
        }
        order.push_back(u);
    }

    void dfs2(int u, int c) {
        component[u] = c;
        for (int v : rev_adj[u]) {
            if (component[v] == -1) {
                dfs2(v, c);
            }
        }
    }
};

void solve() {
    int n, k;
    std::cin >> n >> k;
    std::vector<std::vector<bool>> adj_mats(k, std::vector<bool>(n * n, false));

    for (int i = 0; i < k; ++i) {
        int m;
        std::cin >> m;
        for (int j = 0; j < m; ++j) {
            int u, v;
            std::cin >> u >> v;
            --u; --v; // 0-indexed
            adj_mats[i][u * n + v] = true;
            adj_mats[i][v * n + u] = true;
        }
    }

    auto are_twins = [&](int g_idx, int u, int v) {
        for (int w = 0; w < n; ++w) {
            if (w == u || w == v) continue;
            bool u_w_edge = adj_mats[g_idx][u * n + w];
            bool v_w_edge = adj_mats[g_idx][v * n + w];
            if (u_w_edge != v_w_edge) {
                return false;
            }
        }
        return true;
    };

    TwoSAT ts(n);

    for (int i = 0; i < k; ++i) {
        DSU dsu(n);
        for (int u = 0; u < n; ++u) {
            for (int v = u + 1; v < n; ++v) {
                if (are_twins(i, u, v)) {
                    dsu.unite(u, v);
                }
            }
        }

        std::vector<std::vector<int>> twin_classes(n);
        for (int u = 0; u < n; ++u) {
            twin_classes[dsu.find(u)].push_back(u);
        }

        for (int u = 0; u < n; ++u) {
            if (twin_classes[u].size() >= 2) {
                const auto& tc = twin_classes[u];
                int first = tc[0], second = tc[1];
                bool is_clique_twin_class = adj_mats[i][first * n + second];

                for (size_t p1 = 0; p1 < tc.size(); ++p1) {
                    for (size_t p2 = p1 + 1; p2 < tc.size(); ++p2) {
                        int v1 = tc[p1];
                        int v2 = tc[p2];
                        if (is_clique_twin_class) {
                            
                            ts.add_clause(2 * v1 + 1, 2 * v2 + 1);
                        } else {
                            
                            ts.add_clause(2 * v1, 2 * v2);
                        }
                    }
                }
            }
        }
    }
    
    if (ts.solve()) {
        std::cout << "Yes\n";
    } else {
        std::cout << "No\n";
    }
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