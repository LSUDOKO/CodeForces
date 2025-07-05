#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        long long x, y;
        cin >> a >> b >> x >> y;

        if (a == b) {
            cout << 0 << endl;
            continue;
        }
        vector<long long> d(1001, LLONG_MAX);
        priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> q;

        d[a] = 0;
        q.push({0, a});
        long long ans = -1;

        while (!q.empty()) {
            long long c = q.top().first;
            int u = q.top().second;
            q.pop();

            if (u == b) {
                ans = c;
                break;
            }
            if (c > d[u]) continue;

            int v1 = u + 1;
            if (v1 <= 1000) {
                long long nc = c + x;
                if (nc < d[v1]) {
                    d[v1] = nc;
                    q.push({nc, v1});
                }
            }
            int v2 = u ^ 1;
            if (v2 <= 1000) {
                long long nc = c + y;
                if (nc < d[v2]) {
                    d[v2] = nc;
                    q.push({nc, v2});
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}
