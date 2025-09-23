#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>ans(n);
        for (int i=0;i<n;i++){
            cin>>ans[i];
        }
        vector<pair<int,int>>segement(n);
        for (int i=0;i<n;i++){
            segement[i]={ans[i]-x,ans[i]+x};
        }
        long long count=0;
        int l=segement[0].first;
        int r=segement[0].second;
        for (int i=1;i<n;i++){
            l=max(l,segement[i].first);
            r=min(r,segement[i].second);
            if (l>r){
                count++;
                l=segement[i].first;
                r=segement[i].second;
            }
        }
        cout<<count<<endl;

    }
}
