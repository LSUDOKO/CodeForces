#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    long long k;
    cin >> n >> k;
    vector<int> a(n);
    vector<long long> freq(n + 1, 0);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        freq[a[i]]++;
    }

    vector<long long> max_allowed(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        if (freq[i] % k != 0) {
            cout << 0 <<endl;
            return;
        }
        max_allowed[i] = freq[i] / k;
    }

    long long ans = 0;
    int l = 0;
    vector<long long> window_count(n + 1, 0);

    for (int r = 0; r < n; ++r) {
        window_count[a[r]]++;
        while (window_count[a[r]] > max_allowed[a[r]]) {
            window_count[a[l++]]--;
        }
        ans += r - l + 1;
    }

    cout << ans <<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) 
    solve();

}
