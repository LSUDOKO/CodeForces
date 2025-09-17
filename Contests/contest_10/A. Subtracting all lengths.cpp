#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    vector<int> pos(n + 1); 
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
        pos[p[i]] = i;
    }

    int left_bound = pos[n];
    int right_bound = pos[n];

    bool possible = true;

    
    for (int k = n - 1; k >= 1; --k) {
        int current_val_pos = pos[k];

       
        if (current_val_pos == left_bound - 1) {
            left_bound--;
        } else if (current_val_pos == right_bound + 1) {
            right_bound++;
        } else {

            possible = false;   
            break;
        }

        if (right_bound - left_bound + 1 != (n - k + 1)) {
            possible = false;
            break;
        }
    }

    if (possible) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}