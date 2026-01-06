#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    long long num, den;

    if (c * b > a * d) {
        num = b * c - a * d;
        den = b * c;
    } else {
        num = a * d - b * c;
        den = a * d;
    }
    long long g = __gcd(num, den);
    num /= g;
    den /= g;
    cout << num << "/" << den <<endl;
}
