#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<char>>ans(n,vector<char>(m, ' ')); 
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>ans[i][j];
        }
    }
    int count=0;
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if (ans[i][j]=='W'){
                if (j+1<m && ans[i][j+1]=='P'){
                    count++;
                }
                else if (j-1>=0 &&ans[i][j-1]=='P'){
                    count++;
                }
                else if (i+1<n && ans[i+1][j]=='P'){
                    count++;
                }
                else if (i-1>=0 && ans[i-1][j]=='P'){
                    count++;
                }
            }
        }
    }
    cout<<count<<endl;

}