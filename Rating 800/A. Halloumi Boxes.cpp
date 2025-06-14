#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while((t--)>0){
        long long n,k;
        cin>>n>>k;
        vector<long long>arr(n);
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<long long>copy=arr;
        sort(arr.begin(), arr.end());
        if (copy==arr){
            cout<<"YES"<<endl;
        }
        else{
            if (k==1){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }

    }
// tc (nlogn)
    // sc O(n)
    return 0;
}