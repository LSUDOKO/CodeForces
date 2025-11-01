#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 1; i <= n; i++) {
            v.push_back(i);
        }
        bool dir = 1;
        while (v.size() > 1) {
            int m = v.size();
            vector<int> nxt;
            if (dir) {
                for (int i = 1; i < m; i += 2) nxt.push_back(v[i]);
            } else {
                int p = m % 2;
                for (int i = 0; i < m; i++)
                    if (i % 2 == p) nxt.push_back(v[i]);
            }
            v = nxt;
            dir = !dir;
        }
        cout << v[0] <<endl;
    }
}
