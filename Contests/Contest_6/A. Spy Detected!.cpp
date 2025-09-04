#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int num=0;
        vector<int>v(n);
        map<int,int>mp;
        for (int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        for (auto &p:mp){
            if (p.second==1){
                num=p.first;
                break;
            }
        }
        for (int i=0;i<n;i++){
            if (v[i]==num){
                cout<<i+1<<endl;
                break;
            }
            
    }
}}