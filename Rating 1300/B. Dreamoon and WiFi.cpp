#include<bits/stdc++.h>
using namespace std;
long long comb(int n,int r){
    if (r<0 || r>n) 
    return 0;
    if (r==0 || n==r){
        return 1;
    }
    if (r>n/2){
        r=n-r;
    }
    int fac=1;
    for (int i=1;i<=r;i++){
        fac=fac*(n-i+1)/i;
    }
    return fac;
}
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int tar=0;
    for (char c:s1){
        if (c=='+'){
            tar++;
        }
        else{
            tar--;
        }
    }
    int curr=0;
    int unk=0;
    for (char c : s2){
        if (c=='+'){
            curr++;
        }
        else if (c=='-'){
            curr--;
        }
        else{
            unk++;
        }
    }
    int d=tar-curr;
    int num=unk+d;
    if (abs(d)>unk || abs(num)%2!=0){
        cout<<fixed << setprecision(12)<<0.0<<endl;
    }
    else{
        int a=num/2;
        double fav=comb(unk,a);
        double total=pow(2,unk);
        cout<<fixed << setprecision(12)<<(fav/total)<<endl;
    }
}