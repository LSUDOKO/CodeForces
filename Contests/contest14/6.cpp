#include <bits/stdc++.h>
using namespace std;

long long triSum(long long m, long long d) {
    if (m >= d) return d;

    long long q = d / m;
    long long r = d % m;

    long long big = (q + 1) * (q + 2) / 2;
    long long small = q * (q + 1) / 2;

    return r * big + (m - r) * small;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long health, days;
        cin >> health >> days;

        long long lo = 0, hi = 2e9 + 10;
        while (lo < hi) {
            long long mid = (lo + hi) / 2;
            long long m = min(days, mid + 1);
            long long sum = triSum(m, days);

            if (sum <= mid + health - 1) {
                hi = mid;      
            } else {
                lo = mid + 1;
            }
        }
        cout << days + lo <<endl;
    }
    return 0;
}
