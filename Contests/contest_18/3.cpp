#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<char> ans(n);
        for (int i = 0; i < n; i++) {
            cin >> ans[i];}

        int count = 0;
        for (int i = 0; i < n; i++) {
            if (ans[i] == 'G') {
                count++;
                i += k - 1;
            }
        }

        bool check = false;
        for (int i = 0; i < n; i++) {
            if (ans[i] == 'G') {
                check = true;
                break;
            }
        }

        if (!check) {
            cout << 0 << endl;
        }
        else {
            cout << count << endl;
        }
    }
}
