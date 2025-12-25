#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>ans(n);
    for (int i=0;i<n;i++){
        cin>>ans[i];
    }
    int maxi=INT_MIN;
    int maini=INT_MAX;
    vector<int>res(n,0);
    for (int i=0;i<n;i++ ){
        if (ans[i]>maxi){
            maxi=ans[i];
        }
        if (ans[i]<mini){
            mini=ans[i];
        }
    }
    res[0]=maxi;
    res[n-1]=mini;
    sort(ans.begin(),ans.end());
    for (int i=1;i<n-1;i++){
        res[i]=ans[i];
    }
    for (int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }


}