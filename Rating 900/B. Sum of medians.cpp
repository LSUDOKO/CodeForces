#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        vector<long long>a(n*k);
        for(int i=0;i<n*k;i++){
            cin>>a[i];
        }
        long long sum = 0;
        int step = n/2 + 1;
        int idx = n*k - step; 
        for(int i=0;i<k;i++){
            sum += a[idx];
            idx -= step;
        }
        cout<<sum<<endl;;
    }
}
