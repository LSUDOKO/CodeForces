#include<bits/stdc++.h>
using namespace std;
long long Mod= 1e9+7;
int main(){
    int n;
    cin>>n;
    long long  dpD=1;
    long long  dp0=0;
    for (int i=1;i<=n;i++){
        long long newdpD=(3*dp0)%Mod;
        long long newdp0=(dpD+2*dp0)%Mod;
        dpD=newD;
        dp0=newD;
    }
    cout<<dpD<<endl;
}