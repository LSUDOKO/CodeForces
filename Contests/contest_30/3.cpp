#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>a(n);
        for(int i=0;i<n;i++)
        cin>>a[i];
        vector<long long>d(n-1);
        for(int i=0;i<n-1;i++)
        d[i]=a[i+1]-a[i];
        int l=0;
        while(l<n-1){
            int r=l;
            while(r+1<n-1&&abs(d[r]%2)==abs(d[r+1]%2))
            r++;
            sort(d.begin()+l,d.begin()+r+1);
            l=r+1;
        }
        long long cur=a[0];
        cout<<cur;
        for(int i=0;i<n-1;i++){
            cur+=d[i];
            cout<<" "<<cur;
        }
        cout<<endl;
    }
}