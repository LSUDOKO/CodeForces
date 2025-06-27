#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<int>cont;
    for (int i=0;i<s.size();i++){
        if (i%2==0){
            cont.push_back(s[i] - '0');
        }
    }
    sort(cont.begin(),cont.end());
    for (int i=0;i<cont.size();i++){
        if (i==(cont.size()-1)){
            cout<<cont[i];
        }
        else{
            cout<<cont[i]<<'+';
        }
        
    }
}