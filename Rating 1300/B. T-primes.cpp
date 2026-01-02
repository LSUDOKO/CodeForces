#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long x) {
    if (x < 2) return false;
    for (long long i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

void solve(long long x) {
    long long root = sqrt(x);

    if (root * root == x && isPrime(root)) {
        cout << "YES"<<endl;
    } else {
        cout << "NO"<<endl;
    }
}

int main() {
    int n;
    cin >> n;

    vector<long long> ans(n);
    for (int i = 0; i < n; i++) {
        cin >> ans[i];
    }

    for (int i = 0; i < n; i++) {
        solve(ans[i]);
    }
}
