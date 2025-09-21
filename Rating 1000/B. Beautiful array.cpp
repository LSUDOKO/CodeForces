#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k, b, s;
        cin >> n >> k >> b >> s;

        long long maxi_sum = k * b + n * (k - 1);
        long long mini_sum = k * b;

        if (s < mini_sum || s > maxi_sum) {
            cout << -1 << endl;
        } else {
            vector<long long> ans(n, 0);
            ans[0] = mini_sum;
            s -= mini_sum;

            for (int i = 0; i < n; i++) {
                long long add = min(k - 1, s);
                ans[i] += add;
                s -= add;
            }

            for (int i = 0; i < n; i++) {
                cout << ans[i] << " ";
            }
            cout <<endl;
        }
    }
}
