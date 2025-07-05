#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int count=0;
        if (d-b>=0){
            count =(d-b);
            a=a+d-b;
            if (a>=c){
                count=count+(a-c);
                cout<<count<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
        else{
            cout<<-1<<endl;
        }
    }
}