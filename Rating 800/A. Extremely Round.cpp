#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int round(int n) {
    int count = 0;
    for (int d = 1; d <= 9; ++d) {
        long long num = d;
        while (num <= n) {
            ++count;
            num *= 10;
        }
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << round(n) <<endl;
    }
    return 0;
}