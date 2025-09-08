#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        sort(a.rbegin(), a.rend());          // descending order

        long long total = 0;
        int pick = min(n, m);
        for (int k = 1; k <= pick; ++k)
            total += 1LL * a[k - 1] * (m - k + 1);

        cout << total << '\n';
    }
    return 0;
}