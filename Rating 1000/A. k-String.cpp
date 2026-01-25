#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin>>k;
    string s;
    cin>>s;
    string ans;
    map<char,int>mp;
    for (char c : s){
        mp[c]++;
    }
    for (auto pair : mp){
        int even_odd=pair.second%2;
        if (pair.second%2!=even_odd){
            cout<<-1;
            return 0;
        }
        else{
            if (s.size()%k!=0){
                cout<<-1;
                return 0;
            }
            
        }
    }
    for (int i=0;i<k;i++){
        for (auto p: mp){
            ans+=mp.first;
        }
    }
    for (int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
}