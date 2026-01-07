#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,v;
    cin>>n>>v;
    int prev=0;
    int ans=0;
    vector<int>ans(3005,0);
    while(n--){
        int a,b;
        cin>>a>>b;
        ans[a]+=b;
    }
    for (int i=1;i<=3005;i++){
        int take=min(v,prev);
        ans+=take;
        int rem=v-take;
        //
        take=min(rem,ans[i]);
        ans+=take;
        prev=ans[day]-take;
    }
    cout<<ans<<endl;
}