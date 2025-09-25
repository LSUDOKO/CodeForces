#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>ans(n);
        int op=0;
        int countneg=0;
        int count0=0;
        for(int i=0;i<n;i++){
            cin>>ans[i];
            if (ans[i]==-1){
                countneg++;
            }
            else if (ans[i]==0){
                count0++;
            }
        }
        if (countneg%2!=0){
            op+=2;
        }
        op+=count0;
        cout<<op<<endl;
        
    }
}