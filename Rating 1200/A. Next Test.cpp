#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>ans(n);
    for (int i=0;i<n;i++){
        cin>>ans[i];
    }
    sort(ans.begin(),ans.end());
    int indx=0;
    for (int i=1;i<=ans[n-1]+1;i++){
        if (ans[indx]!=i){
            cout<<i<<endl;
            break;
        }
        else{
            if (index<n){
                indx++;
            }
            
        }
    }
}