#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n), b(n), c(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        for (int i = 0; i < n; i++) cin >> c[i];
        vector<int> preA, preB, preC;
        auto build = [&](vector<int>& arr) {
            vector<int> pre;
            int s = 0;
            pre.push_back(0); 
            for (int v : arr) {
                if ( (s | v) != s ) {  
                    s |= v;
                    pre.push_back(s);
                }
            }
            return pre;
        };
        preA = build(a);
        preB = build(b);
        preC = build(c);
        bool ok = false;
        for (int A : preA) {
            for (int B : preB) {
                for (int C : preC) {
                    if ((A | B | C) == x)
                        ok = true;
                }
            }
        }

        if (ok){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
