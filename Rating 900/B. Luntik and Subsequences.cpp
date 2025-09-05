#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n);
        long long count1=0;
        long long count0=0;
        for (int i=0;i<n;i++){
            cin>>a[i];
            if (a[i]==1) count1++;
            else if (a[i]==0) count0++;
        }
        if (count1==0){
            cout<<0<<endl;
        }
        else {
            cout<<count1*(1LL<<count0)<<endl;
        }
    }
}