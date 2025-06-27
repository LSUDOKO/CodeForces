#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

const int MAX_M = 500005;
const int INF = 1e9;

vector<int> cost(MAX_M, INF);
vector<int> dp(MAX_M, INF);

void precompute() {
    cost[3] = 1;     // A leaf has A(T) = 3, size = 1
    dp[1] = 0;       // Empty product = 1, cost = 0

    for (int i = 2; i < MAX_M; ++i) {
        if (cost[i] != INF) {
            dp[i] = min(dp[i], cost[i]);
        }

        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                if (dp[j] != INF && dp[i / j] != INF) {
                    dp[i] = min(dp[i], dp[j] + dp[i / j]);
                }
            }
        }

        if (dp[i] != INF && i + 2 < MAX_M) {
            cost[i + 2] = min(cost[i + 2], 1 + dp[i]);
        }
    }
}

void solve() {
    int m;
    cin >> m;

    if (m == 1) {
        cout << 1 << "\n"; // Only the root, must be green
        return;
    }

    if (dp[m] == INF) {
        cout << -1 << "\n"; // Impossible
    } else {
        cout << 1 + dp[m] << "\n"; // root + size of all child subtrees
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    precompute();

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
