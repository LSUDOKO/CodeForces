#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        map<int,int> freq;
        for (int x : a) 
        freq[x]++;

        vector<int> f;
        for (auto &p : freq) f.push_back(p.second);
        sort(f.begin(), f.end());

        int m = (int)f.size();
        int ans = 0;
        for (int i = 0; i < m; ++i) {
            ans = max(ans, f[i] * (m - i));
        }

        cout << ans << endl;
    }
    return 0;
}
