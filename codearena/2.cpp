#include<bits/stdc++.h>
using namespace std;
int main(){
    while(t--){
        int n;
        cin>>n;
        int m=n/2;
        for (int i=1;i<=m;i++){
            cout<<i<<" ";
        }
        for (int i=1;i<=m;i++){
            cout<<-i;
            if (i==m){
                cout<<endl;
            }
            else{
                cout<<" ";
            }
        }}}