#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       int ar[n];
       int mx=0;
       for(int i=0;i<n;i++){
           cin>>ar[i];
           mx = max(mx,ar[i]);
       }
       vector<long long>a,b;
       for(int i=0;i<n;i++){
           if(mx==ar[i])b.push_back(mx);
           else a.push_back(ar[i]);
       }
       if(a.size()==0){
           cout<<"-1"<<endl;
           continue;
       }
       
           cout<<a.size()<<" "<<b.size()<<endl;
           for(auto i:a){
               cout<<i<<" ";
           }
           cout<<endl;
           for(auto i:b){
               cout<<i<<" ";
           }
           cout<<endl;
       
    }
    return 0;
}