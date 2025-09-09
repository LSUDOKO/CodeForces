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
        int cost=0;
        int count=0;
        for (int i=0;i<s.size();i++){
            if (s[i]=='0')
            count0++;
            else 
            count1++;
        }
        if (count0==count1){
            cout<<0<<endl;
        }
        else{
            int maxi=(count0>count1)?count0:count1;
            for (int i=0;i<s.size();i++){
                if(count1>0 && s[i]=='0'){
                    count1--;
                    count++;
                }
                else if (count0>0 && s[i]=='1'){
                    count0--;
                    count++;
                }
                else{
                    break;
                }
            }
            cout<<s.size()-count<<endl;
        }
    }
}