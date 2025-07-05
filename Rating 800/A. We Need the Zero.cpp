#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        int i = 0;
        while (i < n) {
            cin >> a[i];
            i++;
        }
        int s = 0;
        i = 0;
        while (i < n) {
            s ^= a[i];
            i++;
        }
        
        if (n % 2 == 0) {
            if (s == 0) {
                cout << 3 << '\n'; 
            } else {
                cout << -1 << '\n';
            }
        } else {
            cout << s << '\n';
        }
    }
    
    return 0;
}