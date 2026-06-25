#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<long long>a(n+1);
    for (int i=1;i<=n;i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    long long curr=0;
    for (int i=0;i<m;i++){
        long long w,h;
        cin>>w>>h;
        long long bottom=max(a[w],curr);
        cout<<bottom<<endl;
        curr=bottom+h;
        
    }
}