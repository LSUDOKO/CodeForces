#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        
        vector<int> freq(26, 0);
        for (char c : s) {
            freq[c - 'a']++;
        }
        
        int odd_counts = 0;
        for (int i = 0; i < 26; ++i) {
            if (freq[i] % 2 != 0) {
                odd_counts++;
            }
        }
        
        int m = n - k;
        if (odd_counts <= k + 1 && m >= 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

int main() {
    solve();
    return 0;
}