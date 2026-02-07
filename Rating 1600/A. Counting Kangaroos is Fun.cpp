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
    int j=n/2;
    int hide=0;
    while(i<n/2 && j<n){
        if (2*ans[i]<=ans[j]){
            hide++;
            i++;
            j++;
        }
        else{
            j++;
        }

    }
    cout<<n-hide;
}