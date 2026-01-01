#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long  sum=0;
    vector<int>ans(n);
    // vector<int>check(n);
    for (int i=0;i<n;i++){
        cin>>ans[i];
    }
    // for (int i=0;i<n;i++){
    //     ans[i]=i+1;
    // }
    sort(ans.begin(),ans.end());
    for (int i=0;i<n;i++){
        sum+=llabs(ans[i]-(i+1));
    }
    cout<<sum;
}