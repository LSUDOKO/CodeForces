#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string ans="";
    string ans2="";
    for (char c: s){
        if (c=='a' || c=='e' || c=='i' || c=='o'|| c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
            continue;
        }
        else{
            ans+=c;
        }
    }
    for (char c: ans){
        if (isupper(c)){
            continue;
        }
        else{
            ans2+=c;
        }
    }
    for (int i=0;i<ans2.size();i++){
        // if (!(i==ans2.size()-1)){
        //     cout<<".";
        // }
        cout<<"."<<ans2[i];
    }
}