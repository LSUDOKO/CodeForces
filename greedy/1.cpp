#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    vector<int>child(n);
    for (int i=0;i<n;i++){
        cin>>child[i];
    }
    cin>>m;
    vector<int>cookies(m);

    for (int i=0;i<m;i++){
        cin>>cookies[i];
    }
    sort(child.begin(),child.end());
    sort(cookies.begin(),cookies.end());
    int i=0;
    int j=0;
    int ans=0;
    while(i<n && j<m){
        if(child[i]<=cookies[j]){
            ans++;
            i++;
            j++;
        }
        else{
            j++;
        }
    }
    cout<<ans;
}