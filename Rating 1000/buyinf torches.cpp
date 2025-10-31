#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,k;
        cin>>x>>y>>k;
        int torches=0;
        int atempt=x-1;
        int a=k*y+k-1;
        torches+=ceil(a/x-1);
        torches+=k;
        cout<<torches<<endl;
    }
    
}