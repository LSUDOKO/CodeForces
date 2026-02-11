#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> names(n);
    for (int i = 0; i < n; i++) {
        cin >> names[i];
    }

    long long ans = 1;

    for (int col = 0; col < m; col++) {
        unordered_set<char> distinctChars;

        for (int row = 0; row < n; row++) {
            distinctChars.insert(names[row][col]);
        }

        ans = (ans * distinctChars.size()) % MOD;
    }

    cout << ans << endl;

    return 0;
}
