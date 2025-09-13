#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long total = 0, minOdd = LLONG_MAX;
        int oddCount = 0;

        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            total += x;
            if (x % 2) {
                oddCount++;
                minOdd = min(minOdd, x);
            }
        }

        if (oddCount == 0) {
            cout << 0 << "\n";               // mower never turns on
        } else if (oddCount % 2 == 1) {
            cout << total << "\n";           // all fields can be cut
        } else {
            cout << total - minOdd << "\n";  // skip smallest odd field
        }
    }
    return 0;
}
