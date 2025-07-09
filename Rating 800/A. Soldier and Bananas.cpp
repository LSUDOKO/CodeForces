#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int totalCost = (w * (w + 1) / 2) * k; 
    int borrowed = totalCost - n; 
    if (borrowed < 0) {
        borrowed = 0;
        cout<<0<<endl; 
    }
    else {
        cout<<borrowed<<endl; 
    }
}