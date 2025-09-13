#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; long long m;
    cin >> n >> m;

    long long last_time = 0, total = 0;
    int last_side = 0;

    for (int i = 0; i < n; i++) {
        long long t; 
        int side;
        cin >> t >> side;

        long long gap = t - last_time;
        int need = (last_side != side);  // 0 agar same side par hoga ya 1 agar opposite hoga

        long long moves = gap;
        if ((moves % 2) != need) 
        moves--; // adjust to match required side

        total += max(0LL, moves);
        last_time = t;
        last_side = side;
    }

    // bacha hua time ki wakt point lena
    total += m - last_time;

    cout << total << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
    solve();}
}
