#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>P;
int main(){
    int n;
    cin>>n;
    vector<P> ans;
    int mini=INT_MAX;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        int l,r;
        cin>>l>>r;
        int mini=min(mini,l);
        int maxi=max(maxi,r);
        ans.push_back({l,r});
    
    }
        
    for (int i=0;i<n;i++){
        if (ans[i][0]==mini && ans[i][1]==max){
            cout<<i+1;
            return 0;
        }
    }
    cout<<-1;

    
}