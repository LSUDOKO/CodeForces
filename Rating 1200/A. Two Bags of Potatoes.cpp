#include<bits/stdc++.h>
using namespace std;
int main(){
    int y,k,n;
    cin>>y>>k>>n;
    // int x=n-y;
    // if(x<=0){
    //     return 0;
    // }
    // else{
    //     int x=n-y;
    //     for (int i=1;i<=x;i++){
    //         if ((y+i)%k==0){
    //             cout<<i<<" ";
    //         }
    //     }
    // }
    bool found=false;
    int start =((y/k)+1)*k;
    for (int i=start;i<=n;i+=k){
        cout<<val-y<<" ";
        found=true;
    }
    if (!found){
        cout<<-1;
    }
}
