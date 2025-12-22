#include<bits/stdc++.h>
using namespace std;

void solve(long long  n){
    long long  ans=0;
    //1st pattern
    ans+=n*(n-1)*(n-1);
    //
    //2and pattern 
    ans+=n*(n-1)*(n-1);
    //3rd pattern 
    ans+=n*(n-1)*(n-2);
    //4th pattern 
    ans+=n*(n-1)*(n-2)*(n-2);
    //5th pattern
    ans +=n*(n-1)*(n-2)*(n-2);
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long  n;
        cin>>n;
        solve(n);
    }
}