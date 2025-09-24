#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        set<ll> black_cells;
        for (ll i = 0; i < m; i++) {
            ll a;
            cin >> a;
            black_cells.insert(a);
        }
        
        // Simulate each iteration
        for (ll i = 1; i <= n; i++) {
            ll x = 1; // Start at cell 1
            // Execute first i commands
            for (ll j = 0; j < i; j++) {
                if (s[j] == 'A') {
                    x++; // Move to next cell
                } else { // s[j] == 'B'
                    // Find smallest y > x where y is not black
                    auto it = black_cells.upper_bound(x);
                    if (it == black_cells.end()) {
                        x = x + 1; // No black cell after x, move to x+1
                    } else {
                        x = *it - 1; // Move to the cell before the next black cell
                        if (black_cells.count(x) == 0) {
                            // x is white, use it
                        } else {
                            x = *it + 1; // Next cell after the black cell
                            // Ensure x is within bounds and white
                            while (black_cells.count(x)) {
                                x++;
                            }
                        }
                    }
                }
            }
            // Color the final cell black
            black_cells.insert(x);
        }
        
        // Output result
        cout << black_cells.size() << '\n';
        for (ll x : black_cells) {
            cout << x << ' ';
        }
        cout << '\n';
    }
    
    return 0;
}