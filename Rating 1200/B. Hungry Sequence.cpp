#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    if (n==1){
        cout<<2;
        return 0;
    }
    else if (n==2){
        cout<<2<<" "<<3;
        return 0;
        }
    else{
        cout<<2<<" "<<3;
        count=2;
    }
    for (int i=5;i<=1e7;i++){
        if (count==n){
            return 0;
        }
        if (i%2!=0 && i%3!=0){
            count++;
            cout<<i<<" ";
        }
    }

}