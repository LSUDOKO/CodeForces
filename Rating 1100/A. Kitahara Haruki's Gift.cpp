#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>ans(n);
    int count=0;
    int count200=0;
    for (int i=0;i<n;i++){
        cin>>ans[i];
        if (ans[i]==100){
            count++;
        }
        else if (count==200){
            count200++;

        }
    }
    if (ans.size()==0){
        cout<<"NO"<<endl;
    }
    else if (count==0){
        if (count200%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else if (count%2==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    // long long sum=0;
    // for (int i=0;i<n;i++){
    //     cin>>ans[i];
    //     sum+=ans[i];
    // }
    // long long a=sum/100;
    // if (n==1){
    //     cout<<"NO"<<endl;
    // }
    // else if  (a%2!=0){
    //     cout<<"NO"<<endl;
    // }
    // else{
    //     cout<<"YES"<<endl;
    // }
}