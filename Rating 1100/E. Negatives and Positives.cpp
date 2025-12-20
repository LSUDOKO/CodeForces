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
        for (int i=0;i<n-1;i++){
            if (ans[i]>=0 && ans[i+1]>=0){

            }
            else if (ans[i]<=0 && ans[i]<=0){
                ans[i]=-ans[i];
                ans[i+1]=-ans[i+1];
            }
            else if (ans[i]+ans[i+1]>=0){

            }
            else if (ans[i]+ans[i+1]<0){
                ans[i]=-ans[i];
                ans[i+1]=-ans[i+1];
            }
        }

    }
}