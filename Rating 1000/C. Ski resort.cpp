#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, q;
        cin >> n >> k >> q;
        long long sum = 0;
        int count = 0;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            if (a[i] <= q) {
                count++;
            } else {
                if (count >= k) {
                    sum += 1LL * (count - k + 1) * (count - k + 2) / 2;
                }
                count = 0;
            }
        }
        if (count >= k) {
            sum += 1LL * (count - k + 1) * (count - k + 2) / 2;
        }
        cout << sum << endl;
    }
}
