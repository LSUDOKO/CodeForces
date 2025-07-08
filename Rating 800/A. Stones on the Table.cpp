#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string s;cin>>s;
    int count =0;
    int i=0;
    while(i<s.size()-1){
        if (s[i]==s[i+1]){
            count++;
            s.erase(s.begin() + i); 
        } else {
            i++; 
        }
    }
    cout<<count<<endl;
    return 0;
}   