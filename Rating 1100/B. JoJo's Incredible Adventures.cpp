#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    string s;
    cin >> s;
    ll n = s.size();

    int mx = 0;
    for (int i = 0; i < n;) {
        if (s[i] == '0') {
            i++;
            continue;
        }
        int j = i;
        while (j < n && s[j] == '1') j++;
        mx = max(mx, j - i);
        i = j;
    }

    if (mx == n) {
        cout << n * n << '\n';
        return;
    }

    if (s[0] == '1' && s[n - 1] == '1') {
        int cnt = 0, i = 0;
        while (i < n && s[i] == '1') cnt++, i++;
        int j = n - 1;
        while (j >= i && s[j] == '1') cnt++, j--;
        mx = max(mx, cnt);
    }

    mx++;
    cout << (ll)(mx / 2) * ((mx + 1) / 2) <<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}
