#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int total_twos = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] == 2) {
                total_twos++;
            }
        }
        if (total_twos % 2 != 0) {
            cout << -1 << endl;
        } else {
            int required_twos = total_twos / 2;
            int current_twos = 0;
            int k = -1;
            for (int i = 0; i < n; ++i) {
                if (a[i] == 2) {
                    current_twos++;
                }
                if (current_twos == required_twos) {
                    k = i + 1; 
                    break;
                }
            }
            cout << k << endl;
        }
    }
    return 0;
}