#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int l=-1;
        int r=-1;
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]!=b[i] && l==-1){
                l=i;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(a[i]!=b[i] && r==-1){
                r=i;
            }
        }
        int i=l;
        while(i>0){
            if(a[i-1]<=b[i]){
                l--;
            } else break;
            i--;
        }
        int j=r;
        while(j<n-1){
            if(a[j+1]>=b[j]){
                r++;
            } else break;
            j++;
        }
        cout<<l+1<<" "<<r+1<<endl;
    }
}
