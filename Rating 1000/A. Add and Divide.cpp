#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        long long ans = LLONG_MAX / 2;
        long long max_x = b - a;
        for (long long x = 0; x <= max_x; ++x) {
            long long a1 = a + x;
            for (int y = 0; y <= 40; ++y) {  // 40 > log2(1e12)
                long long b1 = b + y;
                long long or_val = (a1 | b1);
                long long extra = or_val - b1;
                if (extra < 0) continue;  // impossible, but shouldn't happen
                long long total = x + y + 1 + extra;
                if (total < ans) ans = total;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}