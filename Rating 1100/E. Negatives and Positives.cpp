#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for (int i=0;i<n;i++){
            cin>>a[i];
        }
        
            // if (ans[i]>=0 && ans[i+1]>=0){

            // }
            // else if (ans[i]<=0 && ans[i]<=0){
            //     ans[i]=-ans[i];
            //     ans[i+1]=-ans[i+1];
            // }
            // else if (ans[i]+ans[i+1]>=0){

            // }
            // else if (ans[i]+ans[i+1]<0){
            //     ans[i]=-ans[i];
            //     ans[i+1]=-ans[i+1];
            // }
        //     int a=ans[i]+ans[i-1];
        //     int b=ans[i]+ans[i+1];
        //     if (a>0 && b>0){

        //     }

        //     if ((ans[i]+ans[i+1])<0){
        //         ans[i]=-ans[i];
        //         ans[i+1]=-ans[i+1];
        //     }
            
        // }
        // for(int i=0;i<n;i++){
        //     sum+=ans[i];
        // }
        // cout<<sum<<endl;

        int pos=a[0];
        int neg=-a[0];
        for(int i=1;i<n;i++){
            int new_pos=max(pos+a[i],neg-a[i]);
            int new_neg=max(pos-a[i],neg+a[i]);
            pos=new_pos;
            neg=new_neg;

        }
        cout<<pos<<endl;
    
}}