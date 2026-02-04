#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int y=n/7;y>=0;y--){
        int rem=n-7*y;
        if (rem%4==0){
            int x=rem/4;
            for (int i=0;i<x;i++){
                cout<<4;
            }
            for (int i=0;i<y;i++){
                cout<<7;
            }
            return 0;
        }
    }
    cout<<-1;
    return 0;
}