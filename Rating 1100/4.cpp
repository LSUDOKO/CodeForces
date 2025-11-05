#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        long long ans = LLONG_MIN;
        long long cur = a[0];

        for (int i = 1; i < n; i++) {
            if ((a[i] % 2 + 2) % 2 != (a[i - 1] % 2 + 2) % 2){


                cur = max(a[i], cur + a[i]);}
            else{
                cur = a[i];
            }

            ans = max(ans, cur);
        }

        ans = max(ans, cur);
        cout << ans << endl;;
    }

}
