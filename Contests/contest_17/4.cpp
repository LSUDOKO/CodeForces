#include <bits/stdc++.h>
using namespace std;

long long mygcd(long long a, long long b) {
    while (b != 0) {
        long long t = b;
        b = a % b;
        a = t;
    }
    return a;
}

vector<long long> prime_factors(long long n) {
    vector<long long> factors;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            factors.push_back(i);
            while (n % i == 0) n /= i;
        }
    }
    if (n > 1) factors.push_back(n);
    return factors;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        long long g = a[0];
        for (int i = 1; i < n; i++)
            g = mygcd(g, a[i]);

        if (g == 1) {
            cout << 2 << "\n";
            continue;
        }

        vector<long long> pf = prime_factors(g);
        long long x = 2;
        while (true) {
            bool coprime = true;
            for (auto p : pf) {
                if (x % p == 0) {
                    coprime = false;
                    break;
                }
            }
            if (coprime) {
                cout << x << endl;
                break;
            }
            x++;
        }
    }
}