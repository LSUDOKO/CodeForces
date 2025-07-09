#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main(){
    string s;
    cin >> s;
    int countup=0;
    for (int i=0;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z'){
            countup++;
        }
        else if(s[i]>='a' && s[i]<='z'){
            countup--;
        }
    }
    if (countup>0){
        for (int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z'){
                s[i]=toupper(s[i]);
            }
        }
        cout<<s<<endl;
    }
    else{
        for (int i=0;i<s.size();i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i]=tolower(s[i]);
            }
        }cout<<s<<endl;
    }
}