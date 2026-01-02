#include<bits/stdc++.h>
using namespace std;
vector<int>pairr[1001];
void solve(){
    int n;
    cin>>n;
    vector<int>ans(1001,0);
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        ans[x]=i+1;
    }
    int res=-1;
    for (int i=1;i<1000;i++){
        if (ans[i]==0){
            continue;
        }
        for (int j:pairr[i]){
            if (ans[j]!=0){
                res=max(res,ans[i]+ans[j]);
            }
        }
    }
    cout<<res<<endl;
}
int main(){
    for (int i=1;i<=1000;i++){
        for (int j=1;j<=1000;j++){
            if (__gcd(i,j)==1){
                pairr[i].push_back(j);
            }
        }
    }
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}