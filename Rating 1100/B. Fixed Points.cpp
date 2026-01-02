#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>ans(n);
    int fixed=0;
    for (int i=0;i<n;i++){
        cin>>ans[i];
    }
    for (int i=0;i<n;i++){
        if (ans[i]==i){
            fixed++;
        }
    }
    for (int i=0;i<n;i++){
        if (ans[i]!=i){
            int j=ans[i];
            if (ans[j]==i){
                cout<<fixed+2<<endl;
                return 0;
            }
        }
    }
    for (int i=0;i<n;i++){
        if (ans[i]!=i){
            cout<<fixed+1;
            return 0;
        }
    }
    cout<<fixed<<endl;
}