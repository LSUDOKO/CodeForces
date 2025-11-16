#include<bits/stdc++.>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ans(n);
        for (int i=0;i<n;i++){
            cin>>ans[i];
        }
        vector<int>div;
        for (int i=1;i<sqrt(n);i++){
            if(n%i==0){
                div.push_back(i);
            }
        }
        while(i<div.size()){
            for (int i=0;i<n;i++){
                sum+=
                maxi=max(maxi,sum)
            }
            maxi=msa
        }
    }
}