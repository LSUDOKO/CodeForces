#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string ans="";
    string ans2="";
    for (char c: s){
        char lower_c=(char)tolower((unsigned char)c);
        if (lower_c=='a' || lower_c=='e' || lower_c=='i' || lower_c=='o'|| lower_c=='u' || lower_c=='y'){
            continue;
        }
        else{
            ans+='.';
            ans+=lower_c;
        }

    }
    cout<<ans<<endl;
}