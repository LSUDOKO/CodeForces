#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        
        vector<int> green; 
        for (int i = 0; i < n; i++) {
            if (s[i] == 'g') {
                green.push_back(i);
            }
        }
        int maxi = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == c) {
                auto it = lower_bound(green.begin(), green.end(), i);
                int dist;
                if (it != green.end()) {
                    dist = *it - i; 
                } else {
                    dist = n - i + green[0]; 
                }
                maxi = max(maxi, dist);
            }
        }
        cout << maxi << endl;
    }
    return 0;
}