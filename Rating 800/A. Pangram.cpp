#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    set<int> m;
    char x;
    for (int i=0;i<n;i++){
        x=tolower(s[i]);
        m.insert(x);
    }
    if (m.size()==26){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

}