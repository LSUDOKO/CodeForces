#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min=INT_MAX;
    for (int i=0;i<n;i++){
        if (abs(arr[i])<min){
            min=abs(arr[i]);
        }
    }
    cout<<min;

}