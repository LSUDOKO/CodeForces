#include<bits/stdc++.h>
using namespace std;
int main(){
    int boys,girls;
    cin>>boys>>girls;
    char check;
    int mini=min(girls,boys);
    for (int i=0;i<mini;i++){
        if (boys>=girls){
            cout<<G;
            check='G'
        }
        else{
            cout<<"B";
            check='B';
        }
        if (check=='G'){
            cout<<"B";
        }
        else{
            cout<<"G";
        }
    }
    for (int i=0;i<abs(boys-girls);i++){
        if(boys>girls){
            cout<<"B";
        }
        else{
            cout<<"G";
        }
    }
}