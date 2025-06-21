#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long s;
        cin >> n >> s;

        int count = 0;
        for (int i = 0; i < n; ++i) {
            int dx, dy;
            long long x, y;
            cin >> dx >> dy >> x >> y;

            long long x_dist = (dx == 1) ? s - x : x;
            long long y_dist = (dy == 1) ? s - y : y;

            if (x_dist == y_dist)
                count++;
        }
        cout << count << "\n";
    }
    return 0;
}
