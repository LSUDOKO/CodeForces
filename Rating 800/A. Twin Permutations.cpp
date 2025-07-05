#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int  n;
        cin>>n;
        vector<int> an(n);
        for (int i=0;i<n;i++){
            cin>>an[i];
        }
        for (int i=0;i<n;i++){
            cout<<n+1-an[i]<<" ";
        }
        cout<<endl;

}}