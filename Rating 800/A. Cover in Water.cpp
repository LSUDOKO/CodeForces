#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while((t--)>0){
        int n;
        cin>>n;
        int count=0;
        int total=0;
        int maxcount=0;
        string arr;
        cin>>arr;
        for (int i=0;i<n;i++){
            if (arr[i]=='.'){
                 count++;
                 total++;
                 maxcount=max(maxcount, count);}
            else{
                count=0;
            }
        }
        if (maxcount>=3){
            cout<<2<<endl;
        }
        else{
            cout<<total<<endl;
        }
    }
    return 0;
}