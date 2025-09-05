#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int countab=0;
        int countba=0;
        for (int i=0;i<s.size()-1;i++){
            if (s[i]=='a' && s[i+1]=='b'){
                countab++;
            }
            else if (s[i]=='b' && s[i+1]=='a'){
                countba++;
            }
        }
        if (countab==countba){
            cout<<s<<endl;
        }
        else if (countab>countba){
            for (int i=0;i<s.size();i++){
                if (s[i]=='a'){
                    s[i]='b';
                    break;
                }
            }
            cout<<s<<endl;
        }
        else{
            for (int i=0;i<s.size();i++){
                if (s[i]=='b'){
                    s[i]='a';
                    break;
                }
            }
            cout<<s<<endl;
        }

    }
}