#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long r0,x,d;
        int n;
        cin>>r0>>x>>d>>n;
        string s;
        cin >> s;
        long long r=r0;
        int c=0,i=0;

        while (i<n) {
            if (r<x) {
                c += n - i;
                break;
            }
            if (s[i]=='1') {
                c++;
                r = max(0LL, r - d);
            }
            i++;
        }
        cout<<c<<endl;
    }
}
