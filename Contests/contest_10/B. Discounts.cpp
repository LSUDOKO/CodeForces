#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for(int test = 0; test < t; ++test) {
        int n, k;
        cin >> n >> k;
        vector<long long> a(n);
        for(auto &x : a) cin >> x;
        sort(a.rbegin(), a.rend());
        vector<int> b(k);
        for(auto &x : b) cin >> x;
        sort(b.begin(), b.end());
        long long total = 0;
        for(auto x : a) total += x;
        long long saved = 0;
        long long cons = 0;
        int lst = -1;
        for(int bb : b) {
            long long need = cons + bb - 1;
            int cand = max(lst + 1, (int)need);
            if(cand < n) {
                saved += a[cand];
                cons += bb;
                lst = cand;
            }
        }
        cout << total - saved << '\n';
    }
    return 0;
}