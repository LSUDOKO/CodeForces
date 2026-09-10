#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,limit;
    cin>>n>>limit;
    vector<int>weight(n);
    for (int i=0;i<n;i++){
        cin>>weight[i];
    }
    sort(weight.begin(),weight.end());
    int i=0;
    int j=n-1;
    int ans=0;
    while(i<=j){
        if (i==j){
            ans++;
            break;
        }
        else if(weight[i]+weight[j]<=limit){
            i++;
            j--;
        }
        else{
            j--;
        }
        ans++;
    }
    cout<<ans;
}