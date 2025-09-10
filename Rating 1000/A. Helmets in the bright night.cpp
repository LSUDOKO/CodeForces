#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, p;
        cin >> n >> p;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        vector<pair<int,int>> res(n);
        for (int i = 0; i < n; i++) {
            res[i] = {b[i], a[i]};
        }

        sort(res.begin(), res.end());

        long long cost = 0;
        long long remaining = n; 

        for (int i = 0; i < n && remaining > 0; i++) {
            long long take = min((long long)res[i].second, remaining - 1); 
            long long perCost = min((long long)res[i].first, (long long)p);
            cost += take * perCost;
            remaining -= take;
        }

        cost += remaining * 1LL * p;

        cout << cost << "\n";
    }
    return 0;
}
