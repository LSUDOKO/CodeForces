#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<vector<int>> ans(n, vector<int>(n));
        for (int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                cin>>ans[i][j];
            }
        }
        for (int i=0;i<n/2;i++){
            for (int j=0;j<n;j++){
                if((ans[i][j]!=ans[n-i-1][n-j-1])){
                    k--;
                }
            }
        }
        if (k<0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }
}