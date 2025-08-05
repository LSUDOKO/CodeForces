#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    int lucky_digits = 0;

    while (n > 0) {
        int digit = n % 10;
        if (digit == 4 || digit == 7) {
            lucky_digits++;
        }
        n /= 10;
    }

    if (lucky_digits == 4 || lucky_digits == 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
