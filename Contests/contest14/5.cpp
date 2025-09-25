#include <bits/stdc++.h>
using namespace std;

long long countAtMost(int k, int len, const vector<int>& arr) {
    if (k == 0 || len == 0) return 0;

    int n = arr.size();
    map<int, int> cnt;
    int diff = 0;
    long long total = 0;
    int left = 0;

    for (int right = 0; right < n; right++) {
        if (cnt[arr[right]]++ == 0) diff++;

        while (diff > k) {
            if (--cnt[arr[left]] == 0) diff--;
            left++;
        }

        int start = max(left, right - len + 1);
        total += (right - start + 1);
    }
    return total;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k, l, r;
        cin >> n >> k >> l >> r;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        long long ans = countAtMost(k, r, arr) - countAtMost(k - 1, r, arr);
        if (l > 1) {
            ans -= (countAtMost(k, l - 1, arr) - countAtMost(k - 1, l - 1, arr));
        }
        cout << ans << endl;
    }
    return 0;
}
