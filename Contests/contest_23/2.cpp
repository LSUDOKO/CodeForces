#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,l,r;
        cin>>n>>m>>l>>r;
        int left=max(l,-m);
        int right=left+m;
        cout<<left<<" "<<right<<endl;
    }
}