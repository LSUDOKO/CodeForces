#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;

    if (a == b) {
        cout << 0;
        return 0;
    }

    auto countFactors = [](long long &x, int p) {
        int cnt = 0;
        while (x % p == 0) {
            x /= p;
            cnt++;
        }
        return cnt;
    };

    long long A = a, B = b;

    int a2 = countFactors(A, 2);
    int a3 = countFactors(A, 3);
    int a5 = countFactors(A, 5);

    int b2 = countFactors(B, 2);
    int b3 = countFactors(B, 3);
    int b5 = countFactors(B, 5);

    if (A != B) {
        cout << -1;
        return 0;
    }

    int ans = abs(a2 - b2) + abs(a3 - b3) + abs(a5 - b5);
    cout << ans;
}
