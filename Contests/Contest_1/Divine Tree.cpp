#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>
#include <algorithm>

using ll = long long;

/**
 * @brief Solves a single test case for the Divine Tree problem.
 */
void solve() {
    ll n;
    ll m;
    std::cin >> n >> m;

    int root = -1;

    for (int r = static_cast<int>(n); r >= 1; --r) {
        ll min_m, max_m;

        if (r == 1) {
            min_m = n;
            max_m = n;
        } else {
            min_m = (ll)r + n - 1;
            
            max_m = (ll)r + (ll)r * (r - 1) / 2 + (ll)r * (n - r);
        }

        if (m >= min_m && m <= max_m) {
            root = r;
            break;
        }
    }

    if (root == -1) {
        std::cout << -1 << "\n";
        return;
    }

    std::cout << root << "\n";
    if (n == 1) {
        return;
    }

    std::vector<int> parent(n + 1);
    
    
    if (root == 1) {
        for (int i = 1; i < n; ++i) {
            std::cout << i << " " << i + 1 << "\n";
        }
        return;
    }

    ll min_m_for_root = (ll)root + n - 1;
    ll delta = m - min_m_for_root; // The total "gain" in divinity sum we need.

    parent[1] = root;
    for (int i = 2; i <= n; ++i) {
        if (i != root) {
            parent[i] = 1;
        }
    }

    
    ll gain_gt = root - 1;
    if (gain_gt > 0) {
        ll num_to_move = delta / gain_gt;
        if (num_to_move > n - root) {
            num_to_move = n - root;
        }

        for (int i = 1; i <= num_to_move; ++i) {
            parent[root + i] = root;
        }
        delta -= num_to_move * gain_gt;
    }


    for (int v = root - 1; v >= 2; --v) {
        ll gain_lt = v - 1;
        if (delta >= gain_lt) {
            parent[v] = root;
            delta -= gain_lt;
        }
    }

    for (int i = 1; i <= n; ++i) {
        if (i != root) {
            std::cout << i << " " << parent[i] << "\n";
        }
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