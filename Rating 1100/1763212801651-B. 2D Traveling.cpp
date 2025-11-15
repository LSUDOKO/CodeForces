#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k,a,b;
        cin>>n>>k>>a>>b;
        vector<ll>x(n+1);
        vector<ll>y(n+1);
        for(ll i=1;i<=n;i++){
            cin>>x[i]>>y[i];
        }
        ll price_a=LLONG_MAX;
        ll price_b=LLONG_MAX;
        ll price_llial=abs(x[a]-x[b])+abs(y[a]-y[b]);
        if (k==0){
            cout<<price_llial<<endl;
            continue;
        }
        for (ll i=1;i<=k;i++){
            price_a=min(price_a,abs(x[a]-x[i])+abs(y[a]-y[i]));
            price_b=min(price_b,abs(x[b]-x[i])+abs(y[b]-y[i]));
        }
        cout<<min(price_llial,price_a+price_b)<<endl;


    }
}