#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int> s;
        vector<int> ans(n);
        for (int i=0;i<n;i++){
            cin>>ans[i];
            s.insert(ans[i]);
        }
        if (s.size()<n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}