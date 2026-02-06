#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    vector<int>ans(n);
    for (int i=0;i<n;i++){
        cin>>ans[i];
    }
    
    if (n==1){
        cout<<1;
        return 0;
    }
    sort(ans.begin(),ans.end());
    int i=0;
    
    while(i<n){
        if (nums[i]*2<ans[n-1]){
            i++;
        }
        else {
            break;
        }
    }
    cout<<n-1-i;
}