#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int d;
        cin>>d;
        int x=1;
        int y=x+d;
        int z=y+d;
        int result=y*z;
        cout<<result<<endl;
    }
}