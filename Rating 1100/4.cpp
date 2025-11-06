// #include <bits/stdc++.h>
// using namespace std;

// int main() {

//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<long long> a(n);
//         for (int i = 0; i < n; i++) cin >> a[i];

//         long long ans = LLONG_MIN;
//         long long cur = a[0];

//         for (int i = 1; i < n; i++) {
//             if ((a[i] % 2 + 2) % 2 != (a[i - 1] % 2 + 2) % 2){


//                 cur = max(a[i], cur + a[i]);}
//             else{
//                 cur = a[i];
//             }

//             ans = max(ans, cur);
//         }

//         ans = max(ans, cur);
//         cout << ans << endl;
//     }

// }


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        ll ans = LLONG_MIN, sum = 0;
        int i = 0, j = 0;

        while (j < n) {
            if (sum < 0) {
                sum = 0;
                i = j;
            }

            if (i < j) {
                if ((v[j] ^ v[j - 1]) & 1)
                    sum += v[j];
                else {
                    sum = v[j];
                    i = j;
                }
            } else sum = v[j];

            ans = max(ans, sum);
            j++;
        }

        cout << ans << "\n";
    }
}
