#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int count=0;
        vector<int>arr(n);
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        for (int i=0;i<n;i++){
            if (arr[i]==k){
                count++;
            }
        }
        if (count==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}

