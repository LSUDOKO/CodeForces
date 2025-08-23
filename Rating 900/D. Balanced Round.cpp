#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        int count=0;
        int maxi=0;
        vector<int> arr(n);
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        sort(arr.begin(),arr.end());
        for (int i=0;i<n-1;i++){
            if (arr[i+1]-arr[i]<=k){
                count++;
            }
            else{
                count =0;
            }
            maxi=max(maxi,count);
        }
        cout<<n-maxi-1<<endl;
    }
}