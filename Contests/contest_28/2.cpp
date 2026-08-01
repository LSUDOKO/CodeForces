#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>a(n);
        vector<int>b(m);
        for (int i=0;i<n;i++){
            cin>>a[i];
        }
        for (int i=0;i<m;i++){
            cin>>b[i];
        }
        if (n<2*m){
            cout<<"NO"<<endl;
            continue;
        }
        bool check=true;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for (int i=0;i<m;i++){
            if (a[i]>b[i] || a[n-m+i]<b[i]){
                check=false;
                break;
            }
        }
        if (check){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
