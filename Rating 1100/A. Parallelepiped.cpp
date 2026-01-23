#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if (a==b==c){
        cout<<12*a;
    }
    else{
        int comm;
        int diff;
        if (a==b){
            comm=a;
            diff=c;
        }
        else if (a==c){
            comm=a;
            diff=b;
        }
        else{
            comm=b;
            diff=a;
        }
        int common_all=__gcd(comm,diff);
        cout<<8*common_all+4*(comm/common_all);
    }
}