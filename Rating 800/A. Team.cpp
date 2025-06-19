#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int countfinal=0;
    while(t--){
        int count=0;        
        vector<int> arr(3);
        for (int i=0;i<3;i++){
            cin>>arr[i];
        }
        for (int i=0;i<3;i++){
            if (arr[i] == 1){
                count++;
            }}
        if (count>=2){
            countfinal++;
        }
    }
    cout<<countfinal;
    return 0;
}