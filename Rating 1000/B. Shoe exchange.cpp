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
        vector<int> ans(n);
        map<int, vector<int>> groups;  

        for (int i = 0; i < n; i++) {
            cin >> ans[i];
            groups[ans[i]].push_back(i);
        }

        bool bad = false;
        for (auto &p : groups) {
            if (p.second.size() == 1) { 
                bad = true;
                break;
            }
        }
        if (bad) {
            cout << -1 << "\n";
            continue;
        }

        vector<int> perm(n);
        for (auto &p : groups) {
            auto &v = p.second; 
            int m = v.size();
            for (int i = 0; i < m; i++) {
                int from = v[i];
                int to = v[(i + 1) % m]; 
                perm[from] = to + 1;     
            }
        }

        for (int i = 0; i < n; i++) cout << perm[i] << " ";
        cout << "\n";
    }
    return 0;
}
