#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    while(t--){
        long long a, b, n;
        cin >> a >> b >> n;
        if (b == a) {
            cout << 1 <<endl;
            continue;
        }
        long long m=a/b;
        if (n<=m){
            cout<<1<<endl;
        } else if (n==m+1&&(b*(M+1)%a==0)) {
            cout << 1 <<endl;
        } else {
            cout<<2<<endl;
        }
    }
}