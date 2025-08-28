#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> freq(n + 1); // Since ai <= n
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            if (x <= n) { // Ensure x is within bounds
                freq[x]++;
            }
        }
        int total = 0;
        for (int k = 1; k <= n; ++k) {
            total += k * (freq[k] / k);
        }
        cout << total << '\n';
    }
    return 0;
}