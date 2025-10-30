#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        long long x;
        cin>>n>>x;
        vector<long long>a(n);
        for (int i=0;i<n;i++){
            cin>>a[i];
        }

        sort(a.begin(), a.end()); 

        long long s=0,p=0,b=0;
        for (int i = 0; i < n; i++) {
            long long lb=s/x;
            S += a[i];
            long long la=s/x;
            if (loyalty_after > loyalty_before)
                bonus += a[i];
        }

        cout << bonus << endl;
        for (auto i : a) cout << i << " ";
        cout << endl;
    }
}
