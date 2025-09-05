#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,n;
        cin>>x>>n;
        long long final=0;
        if (x%2==0){
            if(n%4==0) final=0;
            else if(n%4==1) final=-n;
            else if(n%4==2) final=1;
            else final=n+1;
        }
        else{
            if(n%4==0) final=0;
            else if(n%4==1) final=n;
            else if(n%4==2) final=-1;
            else final=-(n+1);
        }
        cout<<final+x<<endl;

    }
}