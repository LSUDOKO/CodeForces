#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>

using namespace std;

const long long INF = 4e18; // A sufficiently large number

struct Operation {
    int x, y, z;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long m;
    cin >> n >> m;

    vector<Operation> ops;
    vector<vector<pair<int, int>>> adj(n + 1);
    
    for (int i = 0; i < m; ++i) {
        int u, v, w;
        cin >> u >> v >> w;
        ops.push_back({u, v, w});
        adj[v].push_back({u, w});
    }

    vector<vector<long long>> d(n + 1, vector<long long>(n + 1, INF));

    for (int start_node = 1; start_node <= n; ++start_node) {
        priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
        
        vector<long long> dist(n + 1, INF);
        dist[start_node] = 0;
        pq.push({0, start_node});

        while (!pq.empty()) {
            long long current_d = pq.top().first;
            int u = pq.top().second;
            pq.pop();

            if (current_d > dist[u]) {
                continue;
            }
            d[start_node][u] = current_d;

            for (auto& edge : adj[u]) {
                int v_node = edge.first;
                int weight = edge.second;
                if (dist[u] != INF && dist[u] + weight < dist[v_node]) {
                    dist[v_node] = dist[u] + weight;
                    pq.push({dist[v_node], v_node});
                }
            }
        }
    }
    
    int q;
    cin >> q;

    while (q--) {
        long long k;
        cin >> k;
        vector<long long> a(n + 1);
        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
        }

        vector<long long> b(n + 1);
        for (int i = 1; i <= n; ++i) {
            b[i] = INF;
            for (int j = 1; j <= n; ++j) {
                if (d[j][i] != INF) {
                    b[i] = min(b[i], a[j] + d[j][i]);
                }
            }
        }

        string result = "";
        for (int i = 1; i <= n; ++i) {
            bool possible = false;
            for (const auto& op : ops) {
                if (op.x == i) {
                    if (b[op.y] != INF) {
                        long long cost = b[op.y] + op.z - b[i] + 1;
                        if (cost <= k) {
                            possible = true;
                            break;
                        }
                    }
                }
            }
            if (possible) {
                result += '1';
            } else {
                result += '0';
            }
        }
        cout << result << "\n";
    }

    return 0;
}