#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int mod =1e9+7;
        vector<int>a(n),b(n),res(n,0);
        for(int i=0 ;i<n;i++){
            cin>>a[i];
        }
        for (int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int j=0;
        for (int i=0 ;i<n;i++){
            while(j!=n && a[j]<=b[i]){
                j++;
            }
            if (j<n){
                res[i]=n-j;
            }
        }
        long long  ans=1;
        sort(res.begin(),res.end());
        for (int i=0 ;i<n;i++){
           long long x = res[i] - i;
            if (x < 0) 
            x = 0;
            ans = (ans * (x % mod)) % mod;
        }
        cout<<ans<<endl;
    }
}