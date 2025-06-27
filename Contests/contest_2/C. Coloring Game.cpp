#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    long long total_ways = 0;
    if (n >= 3) {
        int l = 0;
        int r = n - 2;
        while (l < r) {
            if ((long long)a[l] + a[r] > a[n - 1]) {
                total_ways += (r - l);
                r--; 
            } else {
                l++; 
            }
        }
    }

    for (int k = 2; k < n - 1; ++k) {
        long long target = max(a[k], a[n - 1] - a[k]);
        int l = 0;
        int r = k - 1;
        while (l < r) {
            if ((long long)a[l] + a[r] > target) {
                total_ways += (r - l);
                r--;
            } else {
                l++;
            }
        }
    }

    cout << total_ways << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
