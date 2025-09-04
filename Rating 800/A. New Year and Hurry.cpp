#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int time=0; 
    int problem=0;
    int i=1;
    while(time<=240 ){
        if (problem==n) break;
        time+=5*i;
        if(time>240-k) break;
        problem++;
        i++;
    }
    cout<<problem<<endl;
}