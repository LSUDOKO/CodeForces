#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int dx[4] = {-1, 1, -1, 1};
int dy[4] = {-1, -1, 1, 1};
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int xk,yk;
        cin>>xk>>yk;
        int xq, yq;
        cin>>xq>>yq;
        
        set<pair<int, int>> king,queen;
        for (int j=0;j<4;j++){
            king.insert({xk + dx[j]*a, yk + dy[j]*b});
            king.insert({xk + dx[j]*b, yk + dy[j]*a});
            queen.insert({xq + dx[j]*a, yq + dy[j]*b});
            queen.insert({xq + dx[j]*b, yq + dy[j]*a});
        }
        int ans=0;
        for (auto it : king){
            if (queen.find(it) != queen.end()){
                ans++;
            }
        }
        cout << ans << endl;
}}