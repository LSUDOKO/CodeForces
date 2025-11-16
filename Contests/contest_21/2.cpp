#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int &x : p) cin >> x;

        string x;
        cin >> x;

        int pos1 = -1, posN = -1;
        for (int i = 0; i < n; ++i) {
            if (p[i] == 1) pos1 = i + 1;
            if (p[i] == n) posN = i + 1;
        }

        vector<int> need;
        for (int i = 0; i < n; ++i)
            if (x[i] == '1') need.push_back(i + 1);

        bool possible = true;
        for (int i : need) {
            if (i == 1 || i == n || p[i - 1] == 1 || p[i - 1] == n) {
                possible = false;
                break;
            }
        }
        if (!possible) {
            cout << -1 << endl;
            continue;
        }

        int L = min(pos1, posN), R = max(pos1, posN);
        bool left = false, mid = false, right = false;

        for (int i : need) {
            if (i < L) left = true;
            else if (i > R) right = true;
            else mid = true;
        }

        vector<pair<int, int>> ops;
        if (mid) ops.push_back({L, R});
        if (left) {
            ops.push_back({1, pos1});
            ops.push_back({1, posN});
        }
        if (right) {
            ops.push_back({pos1, n});
            ops.push_back({posN, n});
        }

        cout << ops.size() <<endl;
        for (auto [l, r] : ops)
            cout << l << ' ' << r << endl;
    }
    return 0;
}
