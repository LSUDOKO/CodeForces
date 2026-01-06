#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    map<int,int>ans;
    while(m--){
        int a,b,c;
        cin>>a>>b>>c;
        if (ans[a]!=0){
            int rem=6-ans[a];
            if (rem==5){
                ans[b]=2;
                ans[c]=3;
            }
            else if (rem==4){
                ans[b]=1;
                ans[c]=3;
            }
            else{
                ans[b]=1;
                ans[c]=2;
            }
        }
        else if (ans[b]!=0){
            int rem=6-ans[b];
            if (rem==5){
                ans[a]=2;
                ans[c]=3;
            }
            else if (rem==4){
                ans[a]=1;
                ans[c]=3;
            }
            else{
                ans[a]=1;
                ans[c]=2;
            }
        }
        else if (ans[c]!=0){
            int rem=6-ans[c];
            if (rem==5){
                ans[b]=2;
                ans[a]=3;
            }
            else if (rem==4){
                ans[b]=1;
                ans[a]=3;
            }
            else{
                ans[b]=1;
                ans[a]=2;
            }
        }
        else{
        ans[a]=1;
        ans[b]=2;
        ans[c]=3;
        }


    }
    for (auto pt:ans){
        cout<<pt.second<<" ";
    }
}