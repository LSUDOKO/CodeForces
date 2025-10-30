#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count=0
        vector<int> ans(n);
        bool flag=false;
        for (int i=0;i<n;i++){
            cin>>ans[i];
            if (arr[i]%2==0){
                count++;
            }
            else{
                count--;
            }
        }
        if (count==n || count==(-(n))){
            for (int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        else{
            sort(ans.begin(),ans.end());
            for (int i=0;i<n;i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        
    }
}