#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool app(string &s){
    if (s.empty()) return false;
    if (s[0]!=s[s.size()-1]){
        s.erase(s.begin());
        s.erase(s.end()-1);
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        if (n==0){
            cout<<0<<endl;
        }
        while(n>=1){
            if (app(s)){
                n=n-2;
            }
            else{
                cout<<n<<endl;
                break;
            }
        }
        if (n < 1) {
            cout << 0 << endl;
        }
    }
}