#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,n;
    cin>>s>>n;
    vector<pair<int,int>>ans;

    for(int i=0;i<n;i++){
        int strength;
        int gain;
        cin>>strength>>gain;
        ans.push_back({strength,gain});
    }
    sort(ans.begin(),ans.end());
    // for ( auto p:ans){
    //     cout<<ans.first<<ans.second;

    // }
    for (auto p: ans){
        if (s>p.first){
            s+=p.second;
        }
        else{
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
}