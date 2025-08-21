#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> divisors;
        for (long long i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                divisors.push_back(i);
                if (i != n / i) divisors.push_back(n / i);
            }
        }
        sort(divisors.begin(), divisors.end());
        int maxi = 1, count = 1;
        for (int i = 1; i < (int)divisors.size(); i++) {
            if (divisors[i] == divisors[i-1] + 1) {
                count++;
            } else {
                count = 1;
            }
            maxi = max(maxi, count);
        }
        cout << maxi << endl;
    }
}
