#include<bits/stdc++.h>
#include <string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        string ans;
        cin>>s;
        int a=-1;
        int b=-1;
        int count=0;
        for (int i=0;i<s.size();i++){
            if (s[i]=='1'){
                b=i;
                break;
            }
        }
        for (int i=0;i<s.size();i++){
            if (s[i]=='0'){
                a=i;
                break;
            }
        }
        for (int i=0;i<s.size();i++){
            if (i==a || i==b){
                continue;
            }
            else{
                ans+=s[i];
            }
        }
        cout<<ans<<endl;

    }
}
