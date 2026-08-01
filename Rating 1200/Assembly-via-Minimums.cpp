#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int m=(n*(n-1))/2;
        vector<int>ans(m);
        for (int i=0;i<m;i++){
            cin>>ans[i];
        }
        sort(ans.begin(),ans.end());
        int i=0,x=n-1;
        while(x>0){
            cout<<ans[i]<<" ";
            i+=x;
            x--;
        }
        cout<<1000000000<<endl;
    }
}
