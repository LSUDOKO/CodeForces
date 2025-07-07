#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const long long INF = 4e18;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    long long ans_no_op = 0;
    vector<long long> sum(n, 0), mn(n, 0);

    long long cur_min = INF, cur_sum = 0;
    for (int i = 0; i < n; ++i) {
        cur_min = min(cur_min, a[i]);
        ans_no_op += cur_min;
        cur_sum += cur_min;
        sum[i] = cur_sum;
        mn[i] = cur_min;
    }

    vector<bool> lrm(n, false);
    cur_min = INF;
    for (int i = 0; i < n; ++i) {
        if (a[i] < cur_min) {
            lrm[i] = true;
            cur_min = a[i];
        }
    }

    vector<long long> suf(n, 0);
    suf[n - 1] = sum[n - 1];
    for (int i = n - 2; i >= 0; --i)
        suf[i] = min(sum[i], suf[i + 1]);

    long long ans = ans_no_op;
    for (int i = 0; i < n; ++i) {
        long long cur_op = INF;
        if (!lrm[i]) {
            if (i < n)
                cur_op = suf[i];
        } else {
            if (i < n - 1) {
                long long pre = (i > 0) ? sum[i - 1] : 0;
                long long prv = (i > 0) ? mn[i - 1] : INF;
                long long last = min(prv, a[i] + a[i + 1]);
                cur_op = pre + last;
            }
        }
        ans = min(ans, cur_op);
    }

    cout << ans << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
