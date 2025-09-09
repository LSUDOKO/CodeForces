#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cout_3=0;
        int cout_2=0;
        while(n>0 && n%3==0){
            cout_3++;
            n=n/3;
        }
        while(n>0 && n%2==0){
            cout_2++;
            n=n/2;
        }
        if (n>1 |cout_2>cout_3){
            cout<<-1<<endl;
        }
        else{
            cout<<cout_3+(cout_3-cout_2)<<endl;
        }
    }
}