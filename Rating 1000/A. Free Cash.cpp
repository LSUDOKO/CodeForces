#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=1;
    map<pair<int,int>,int>ans;
    for (int i=0;i<n;i++){
        int h;
        int m;
        cin>>h>>m;
        ans[{h,m}]++;
    }
    for(auto it :ans){
        count=max(count,it.second);
    }
    cout<<count;
}