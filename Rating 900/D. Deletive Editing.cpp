#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc; 
    cin >> tc;
    while (tc--) {
        string s, t;
        cin >> s >> t;
        int n = s.size();
        int m = t.size();
        vector<int> arr(26, 0);

        for (int i = 0; i < m; i++) {
            arr[t[i] - 'A']++;
        }

        for (int i = n - 1; i >= 0; i--) {
            if (arr[s[i] - 'A'] > 0) {
                arr[s[i] - 'A']--;
            } else {
                s[i] = '.';
            }
        }

        string ans = "";
        for (int i = 0; i < n; i++) {
            if (s[i] != '.') {
                ans += s[i];
            }
        }

        if (ans == t) {
            cout << "YES"<<endl;
        } else {
            cout << "NO"<<endl;
        }
    }
}
