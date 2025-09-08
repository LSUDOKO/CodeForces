#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>arr(n);
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        int summin=0;
        int summax=0;
        for(int i=0;i<n;i++){
            summax+=ceil(arr[i]/(float)x);
            summin+=arr[i];
        }
        int summinresult=ceil(summin/n);
        cout<<summinresult<<" "<<summax<<endl;
    }
}