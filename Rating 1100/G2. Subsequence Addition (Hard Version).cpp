#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> ans,int n){
        if(ans[0]!=1){
            cout<<"NO"<<endl;
        }
        else{
            long long sum=1;
            for(int i=1;i<n;i++){
                if (ans[i]>sum){
                    cout<<"NO"<<endl;
                    return;
                }
                sum+=ans[i];
                
            }
            cout<<"YES"<<endl;
        }}
int main(){
    int t;
    cin>>t;
    
    while(t--){
        long long  n;
        cin>>n;
        vector<long long>ans(n);
        for (int i=0;i<n;i++){
            cin>>ans[i];
        }
        sort(ans.begin(),ans.end());
        solve(ans,n);

    }
}