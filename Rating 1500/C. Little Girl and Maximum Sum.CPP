#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    vector<int>ans(n);
    for (int i=0;i<n;i++){
        cin>>ans[i];
    }
    vector<pair<int>>filt
    while(q--){
        int l,r;
        cin>>l>>r;
        for (int i=l;i<=r;i++){
            filt[l]++;
        }
    }
    sort(ans.begin(),ans.end(),[](const pair<int,int>&a,const pair<int,int>&b){
        return a.second>b.second;
    });
    

}