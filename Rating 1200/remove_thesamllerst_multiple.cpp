#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<bool> removed(n + 1, false);

    int ans = 0;

    for (int k = 1; k <= n; k++) {

        // Try all multiples of k
        for (int j = k; j <= n; j += k) {

            // This number must remain in T.
            // Therefore k cannot remove this or any later multiple.
            if (s[j - 1] == '1') {
                break;
            }

            // If j has not already been removed,
            // remove it using k.
            if (!removed[j]) {
                removed[j] = true;
                ans += k;
            }
        }
    }

    cout << ans << '\n';
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}