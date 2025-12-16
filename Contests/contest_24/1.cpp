#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int a=s[n-1];
        int count=0;
        for(int i=0;i<n-1;i++){
            if (s[i]!=a){
                count++;
            }
        }
        cout<<count<<endl;
    }
}