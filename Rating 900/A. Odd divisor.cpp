#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        bool result=(((n)&(n-1))==0);
        if (result==true){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        }
    
}