#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> v(n);
        for (long long i = 0; i < n; i++) {
            cin >> v[i];
        }

        long long ans = 0;
        bool ok = true;

        for (long long i = n - 2; i >= 0; i--) {
            while (v[i] >= v[i+1] && v[i] > 0) {
                v[i] /= 2;
                ans++;
            }
            if (v[i] >= v[i+1]) { 
                ok = false;
                break;
            }
        }

        if (!ok) cout << -1 << endl;
        else cout << ans << endl;
    }
}
