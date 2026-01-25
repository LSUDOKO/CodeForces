#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count=0;
    for (int i=0;i<s.size();i++){
        if (s[i]=='h'  && count==0){
            count++;
        }
        else if (s[i]=='e' && count==1){
            count++;
        }
        else if (s[i]=='l' && count==2){
            count++;
        }
        else if (s[i]=='l' && count==3){
            count++;
        }
        else if (s[i]=='o' && count==4){
            count++;
        }
    }
    if (count==5){
        cout<<"YES";
    }
}