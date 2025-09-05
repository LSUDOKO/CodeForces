#include<bits/stdc++.h>
using namespace std;

int min_op(string n, string x){
    int op=0;
    int check=x.size()-1;
    for (int i=n.size()-1;i>=0;i--){
        if (n[i]==x[check]){
            check--;
            if (check<0) break;
        }
        else{
            op++;
        }
    }
    if (check>=0) return INT_MAX;
    else{
        return op;
}}
int main(){
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        vector<string> ans={"00","25","75","50"};
        int ans1=INT_MAX;
        for (auto x:ans){
            ans1=min(ans1,min_op(n,x));
        }
        cout<<ans1<<endl;
    }
}