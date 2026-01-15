#include <bits/stdc++.h>
using namespace std;

static const int MAXP = 200000;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    // 1️⃣ Sieve of Eratosthenes
    vector<bool> isPrime(MAXP + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= MAXP; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= MAXP; j += i) {
                isPrime[j] = false;
            }
        }
    }

    vector<int> nextPrime(MAXP + 2);
    int lastPrime = -1;
    for (int i = MAXP; i >= 0; i--) {
        if (isPrime[i]) lastPrime = i;
        nextPrime[i] = lastPrime;
    }
    vector<vector<int>> cost(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cost[i][j] = nextPrime[a[i][j]] - a[i][j];
        }
    }
    int ans = INT_MAX;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            sum += cost[i][j];
        }
        ans = min(ans, sum);
    }

    // Columns
    for (int j = 0; j < m; j++) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += cost[i][j];
        }
        ans = min(ans, sum);
    }
    cout<<ans<<endl;
}
