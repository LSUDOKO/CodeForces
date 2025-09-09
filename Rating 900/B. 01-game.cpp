#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int count0=0;
        int count1=0;
        int count=0;
        int n=s.size();
        for (int i=0;i<s.size();i++){
            if (s[i]=='0'){
                count0++;
            }
            else{
                count1++;
            }
        }
        while(n--){
            if (count0>0 && count1>0){
                count0--;
                count1--;
            count++;}
        }
        if (count%2!=0){
            cout<<"DA"<<endl;
        }
        else{
            cout<<"NET"<<endl;
        }
        }
    }   