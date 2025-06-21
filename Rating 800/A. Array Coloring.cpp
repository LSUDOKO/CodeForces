#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cou=0;
        vector<int> a(n);
        for (int i=0;i<n;i++){
            cin>>a[i];
        }
        if (a.size()<=1){
            cout<<"NO"<<endl;
        }
        else{
            for (int i=0;i<n;i++){
                if (a[i]%2!=0){
                    cou+=a[i];
                }
            }
            if (cou%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        }
        
    }
}