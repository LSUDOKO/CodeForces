#include <iostream>
#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

long long lcm(long long a, long long b) {
    if (a == 0 || b == 0) return 0;
    if (a == 1) return b;
    if (b == 1) return a;
    long long common = gcd(a, b);
    return (a / common) * b;
}

void solve() {
    int n;
    cin >> n;
    vector<long long> b(n);
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }

    long long x = 1;

    for (int i = 0; i < n - 1; ++i) {
        if (b[i+1] % b[i] != 0) {
            long long common = gcd(b[i], b[i+1]);
            long long required_factor = b[i] / common;
            x = lcm(x, required_factor);
        }
    }
   
    cout << x << "\n";
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}