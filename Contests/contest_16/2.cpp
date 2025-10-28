#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    for (int test = 0; test < t; test++) {
        int n;
        cin >> n;
        vector<long long> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        vector<long long> M(n + 1);
        M[1] = a[1];
        for (int i = 2; i <= n; i++) {
            M[i] = max(M[i - 1], a[i]);
        }
        long long ans = 0;
        for (int k = 1; k <= n; k += 2) {
            long long u = LLONG_MAX / 2;
            if (k > 1) {
                u = min(u, M[k - 1]);
            }
            if (k < n) {
                u = min(u, M[k + 1]);
            }
            long long target = u - 1LL;
            long long bk = min(a[k], target);
            ans += a[k] - bk;
        }
        cout << ans << '\n';
    }
}