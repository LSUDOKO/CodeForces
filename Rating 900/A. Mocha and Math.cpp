#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>arr(n);
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans=arr[0];
        for (int i=0;i<n;i++){
            ans=ans&arr[i];
        }
        cout<<ans<<endl;
    }
}   