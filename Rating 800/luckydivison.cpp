#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>n;
    string s=to_string(n);
    for (int i=0;i<n;i++){
        if ((s[i]-'0')!='4' && (s[i]-'0')!='7'){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
}