#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long  a,b;
        cin>>a>>b;
        if (a==b){
            cout<<0<<" "<<0<<endl;
        }
        else{
            long long sub=abs(a-b);   
            cout<<sub<<" "<<min(a%sub,sub-a%sub)<<endl;
        }
    }
}