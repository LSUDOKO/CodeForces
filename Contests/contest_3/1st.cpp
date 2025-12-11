#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> s(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        s[i] = a[i];
    }
    sort(s.begin(), s.end());
    vector<int> d;
    for (int i = 0; i < n; ++i) {
        if (a[i] != s[i]) {
            d.push_back(a[i]);
        }
    }
    if (d.empty()) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
        cout << d.size() << "\n";
        for (int i = 0; i < d.size(); ++i) {
            cout << d[i] << (i == d.size() - 1 ? "" : " ");
        }
        cout << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
