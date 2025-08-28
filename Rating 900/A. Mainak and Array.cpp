// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> arr(n);
        
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//         }
        
//         if (n <= 1) {
//             cout << 0 << endl;
//             continue;
//         }
        
//         int maxi = arr[0];
//         int mini = arr[0];
        
//         for (int i = 1; i < n; i++) {
//             if (arr[i] > maxi) {
//                 maxi = arr[i];
//             }
//             if (arr[i] < mini) {
//                 mini = arr[i];
//             }
//         }
        
//         cout << maxi - mini << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        if (n == 1) {
            cout << 0 << endl;
            continue;
        }
        
        int ans = a[n-1] - a[0]; 
        for (int i = 1; i < n; i++) {
            ans = max(ans, a[i] - a[0]);
        }
        for (int i = 0; i < n - 1; i++) {
            ans = max(ans, a[n-1] - a[i]);
        }
        for (int i = 0; i < n - 1; i++) {
            ans = max(ans, a[i] - a[i+1]);
        }
        cout << ans << endl;
    }
    return 0;
}