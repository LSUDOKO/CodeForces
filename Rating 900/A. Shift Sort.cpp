#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        int ones = count(s.begin(), s.end(), '1');
        int bad = 0;
        for (int i = 0; i < n - ones; ++i)
            if (s[i] == '1') ++bad;
        cout << bad << endl;
    }

}