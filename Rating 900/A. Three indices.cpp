#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        bool found = false;
        int res = -1;

        for (int i = 1; i < n - 1; i++) {
            if (arr[i] > arr[i-1] && arr[i] > arr[i+1]) { 
                res = i;
                found = true;
                // break;
            }
        }

        if (found) {
            cout << "YES"<<endl;
            cout << res << " " << res+1 << " " << res+2 <<endl;
        } else {
            cout << "NO"<<endl;
        }
    }
}
