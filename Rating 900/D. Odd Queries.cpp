#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<long long> a(n+1), pref(n+1,0);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            pref[i] = pref[i-1] + a[i];
        }
        long long total = pref[n];
        while (q--) {
            int l, r;
            long long k;
            cin >> l >> r >> k;
            long long rangeSum = pref[r] - pref[l-1];
            long long len = r - l + 1;
            long long newSum = total - rangeSum + len * k;

            cout << (newSum % 2 ? "YES\n" : "NO\n");
        }
    }
}
