#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,q;
    cin>>n>>q;
    string s,t;
    cin>>s>>t;
    vector<int>a(n+1),b(n+1),c(n+1),d(n+1);
    for (int i=0;i<n;i++) {
        a[i+1]=a[i]+(s[i]=='0');
        b[i+1]=b[i]+(t[i]=='0');
        c[i+1]=c[i]+(s[i]=='0'&&t[i]=='1');
        d[i+1]=d[i]+(s[i]=='1'&&t[i]=='0');
    }
    while (q--) {
       int l,r;
       cin>>l>>r;
        int len=r-l+1;
        int s0=a[r]-a[l-1];
        int s1=len-s0;
        int t0=b[r]-b[l-1];
        int t1=len-t0;
        int x=c[r]-c[l-1];
        int y=d[r]-d[l-1];
        if (s0>=s1&&t0<t1)
            cout<<(2*x<=len?"YES\n":"NO\n");
        else if (s0<s1&&t0>=t1)
            cout<<(2*y<=len ?"YES\n":"NO\n");
        else
            cout<<"YES"<<endl;;
    }
}

int main() {
    int t;
   cin>>t;
   while(t--){
       solve();
   }
}
