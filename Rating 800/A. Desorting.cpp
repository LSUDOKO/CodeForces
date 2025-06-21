#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int mini=INT_MAX;
        vector<int> a(n);
        for (int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int> b=a;
        sort(b.begin(), b.end());
        if (a!=b){
            cout<<0<<endl;
        }
        else{
            for (int i=0;i<n-1;i++){
                mini=min(mini,a[i+1]-a[i]);
            }
            if (mini==0 || mini ==1){
                cout<<1<<endl;
            }
            else if (mini>=2 && mini%2==0){
                cout<<mini/2+1<<endl;
            }
            else{
                cout<<int(mini/2.0+0.5)<<endl;
            }
        }
    }
}