#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

bool are_ranges_close(int l_min, int l_max, int r_min, int r_max) {
    return l_max >= r_min - 1 && r_max >= l_min - 1;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; ++i) {
        if (abs(a[i] - a[i + 1]) <= 1) {
            cout << 0 << "\n";
            return;
        }
    }

    int min_ops = -1;

    for (int q = 0; q < n - 1; ++q) {
        vector<pair<int, int>> right_ranges(n);
        int current_r_min = a[q + 1];
        int current_r_max = a[q + 1];
        for (int r = q + 1; r < n; ++r) {
            current_r_min = min(current_r_min, a[r]);
            current_r_max = max(current_r_max, a[r]);
            right_ranges[r] = {current_r_min, current_r_max};
        }

        int current_l_min = a[q];
        int current_l_max = a[q];
        int best_r = n - 1;

        for (int p = q; p >= 0; --p) {
            current_l_min = min(current_l_min, a[p]);
            current_l_max = max(current_l_max, a[p]);

            while (best_r > q + 1) {
                int prev_r_min = right_ranges[best_r - 1].first;
                int prev_r_max = right_ranges[best_r - 1].second;
                if (are_ranges_close(current_l_min, current_l_max, prev_r_min, prev_r_max)) {
                    best_r--;
                } else {
                    break;
                }
            }

            int r_min = right_ranges[best_r].first;
            int r_max = right_ranges[best_r].second;
            if (are_ranges_close(current_l_min, current_l_max, r_min, r_max)) {
                int ops = (q - p) + (best_r - (q + 1));
                if (min_ops == -1 || ops < min_ops) {
                    min_ops = ops;
                }
            }
        }
    }

    cout << min_ops << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
