#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>ans(n);
    for (int i=0;i<n;i++){
        cin>>ans[i];
    }
    int count=0;
    int maxi=INT_MIN;
    for (int i=2;i<n;i++){
        if (ans[i-2]+ans[i-1]==ans[i]){
            count++;
        }
        else {
            maxi=max(maxi,count);
            count=0;
        }
    }
    cout<<maxi<<endl;
}
