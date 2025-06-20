#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>arr (n);
    vector<int>ans;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=0;i<n;i++){
        if (arr[i]>=arr[k-1] and arr[i]>0){
            ans.push_back(arr[i]);
        }
    }
    cout<<ans.size()<<endl;
}