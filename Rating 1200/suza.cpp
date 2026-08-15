#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cin.tie(NULL)
#define int long long


void solve(){
    int n,q;
    cin>>n>>q;
    vector<int>arr(n);
    vector<int>prefix(n);
    vector<int>maxprefix(n);

    for (int i=0;i<n;i++){
    cin>>arr[i];
    prefix[i]=arr[i];
    if (i>0){
        prefix[i]=prefix[i]+prefix[i-1];
    }

    maxprefix[0]=prefix[0];}
    for (int i=1;i<n;i++){
        maxprefix[i]=max(prefix[i],maxprefix[i-1]);
    }
    while(q--){
        int k;
        cin>>k;
        int pos=upper_bound(maxprefix.begin(),maxprefix.end(),k)-maxprefix.begin();
        if (pos==0){
            cout<<0<<" ";
        }
        else{
            cout<<prefix[pos-1]<<" ";
        }
    }
    cout<<endl;
    
}
int32_t main(){
  fast_io;
  int t;
  cin>>t;
  while(t--){
      solve();
}

}

