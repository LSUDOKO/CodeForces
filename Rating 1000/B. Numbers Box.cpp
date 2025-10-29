#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int count=0;
        int mini=INT_MAX;
        int sum=0;
        vector<vector<int>> ans(n, vector<int>(m));
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                cin>>ans[i][j];
            }
        }
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                if (ans[i][j]<0){
                    count++;
                    
            }
            mini=min(abs(ans[i][j]),mini);
            sum+=abs(ans[i][j]);    }

        }
        if (count%2==0){
            cout<<sum<<endl;
        }
        else{
            cout<<sum-2*(mini)<<endl;
        }

}}