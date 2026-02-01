#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>>teams(n);
    for (int i=0;i<n;i++){
        cin>>teams[i].first>>teams[i].second;
    }
    //sort acoording to desc of problems and asce of time
    sort(teams.begin(),teams.end(),[](auto &a ,auto &b){
        if (a.first!=b.first){
            return a.first>b.first;
        }
        return a.second< b.second;
    });
    int curr=1;
    for (int i=0;i<n;){
        int j=i;
        while(j<n && teams[i]==teams[j]){
            j++;
        }
        int grpsize=j-i;
        int start=curr;
        int end=curr+grpsize-1;
        if (k>=start && k<=end){
            cout<<grpsize<<endl;
            return 0;
        }
        curr+=grpsize;
        i=j;
    }
    return 0;
}