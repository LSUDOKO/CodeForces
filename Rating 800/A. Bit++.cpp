#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int x=0;
    int t;
    cin>>t;
    while(t--){
        cin>>s;
        if (s.find('+')!=string::npos){
            x++;
        }
        else if (s.find('-')!=string::npos){
            x--;
        }
    }
    cout<<x;
    return 0;
}