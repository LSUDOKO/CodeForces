#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin>>k;
    string s;
    cin>>s;
    string block="";
    if (s.size()%k!=0){
        cout<<-1;
        return 0;
    }
    map<char,int>mp;
    for (char c : s){
        mp[c]++;
    }
    for (auto pair : mp){
        if (pair.second%k!=0){
            cout<<-1;
            return 0;
        }
    }
    for (auto p:mp){
        block+=string(p.second/k,p.first);
    }
    string ans="";
    for (int i=0;i<k;i++){
        ans+=block;
    }
    cout<<ans;
}