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
        
        vector<int> green; // Store indices of 'g'
        for (int i = 0; i < n; i++) {
            if (s[i] == 'g') {
                green.push_back(i);
            }
        }
        
        // Problem guarantees at least one 'g', so green is not empty
        int maxi = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == c) {
                auto it = lower_bound(green.begin(), green.end(), i);
                int dist;
                if (it != green.end()) {
                    dist = *it - i; // Distance to next 'g'
                } else {
                    dist = n - i + green[0]; // Circular distance to first 'g'
                }
                maxi = max(maxi, dist);
            }
        }
        cout << maxi << endl;
    }
    return 0;
}