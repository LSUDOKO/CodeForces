#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int x, y;
        cin >> x >> y;
        if(x == y) {
            cout << -1 << endl;
        } else if(x < y) {
            cout << 2 << endl;
        } else {
            if(y >= 2 && x - y >= 2) {
                cout << 3 << endl;
            } else {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}