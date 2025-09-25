#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ans(n);
        for (int i=0;i<n;i++){
            cin>>ans[i];
        }
        int maxi=INT_MIN;
        sort(ans.begin(),ans.end());
        for (int i=0;i<n-1;i=i+2){
            maxi=max(maxi,abs(ans[i]-ans[i+1]));
        }
        cout<<maxi<<endl;
    }
}