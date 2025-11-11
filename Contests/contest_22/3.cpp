#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        if (b % 2 == 1) { 
            if (a % 2 == 0) {
                cout << -1 <<endl;
            } else {
                cout << a * b + 1 <<endl;
            }
        } else { 
            if (a % 2 == 0) {
                cout << a * (b / 2) + 2 <<endl;
            } else {
                if (b % 4 == 0) {
                    cout << a * (b / 2) + 2 <<endl;
                } else {
                    cout << -1 <<endl;
                }
            }
        }
    }

    return 0;
}
