#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for(int test = 0; test < t; test++) {
        long long n;
        int d;
        cin >> n >> d;
        vector<int> res;
        res.push_back(1);
        if(n >= 3 || d % 3 == 0) {
            res.push_back(3);
        }
        if(d == 5) {
            res.push_back(5);
        }
        if(n >= 3 || d % 7 == 0) {
            res.push_back(7);
        }
        if(n >= 6) {
            res.push_back(9);
        } else {
            long long fact_mod9 = 1;
            for(int i = 1; i <= n; i++) {
                fact_mod9 = (fact_mod9 * i) % 9;
            }
            if((d * fact_mod9) % 9 == 0) {
                res.push_back(9);
            }
        }
        for(size_t i = 0; i < res.size(); i++) {
            cout << res[i];
            if(i < res.size() - 1) cout << " ";
        }
        cout <<endl;
    }
    return 0;
}