#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    string a="";
    for (int i=s.size()-1; i>=0; i--){
        a+=s[i];
    }
    if (a==t){
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
}