#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        int ans = 1e9;

        if (k == 2 || k == 3 || k == 5) {
            for (int x : a) ans = min(ans, (k - x % k) % k);
        } 
        else { // k == 4
            int d4 = 1e9;
            vector<int> v;
            for (int x : a) {
                d4 = min(d4, (4 - x % 4) % 4);   
                v.push_back((2 - x % 2) % 2);
            }
            sort(v.begin(), v.end());
            ans = min(d4, v[0] + v[1]);
        }
        cout << ans << "\n";
    }
}
