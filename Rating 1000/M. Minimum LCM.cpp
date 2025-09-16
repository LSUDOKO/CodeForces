// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         int ans1 = 1, ans2 = n - 1;
//         long long mini = LLONG_MAX;

//         int a = 1, b = n - 1;
//         while (a <= b) {
//             long long g = gcd(a, b);
//             long long lcm = 1LL * a / g * b;
//             if (lcm < mini) {
//                 mini = lcm;
//                 ans1 = a;
//                 ans2 = b;
//             }
//             a++;
//             b--;
//         }

//         cout << ans1 << " " << ans2 << endl;
//     }
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int ans1 = 1, ans2 = n - 1; // default
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                ans1 = n / i;
                ans2 = n - ans1;
                break; // first factor gives largest gcd
            }
        }

        cout << ans1 << " " << ans2 << endl;
    }
}
