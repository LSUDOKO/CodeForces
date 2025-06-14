#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while((t--)>0){
        int maxdiff=INT_MIN;
        long long n,x;
        cin>>n>>x;
        vector<long long>arr(n);
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        arr.insert(arr.begin(), 0);
        arr.push_back(x);
        for (int i=0;i<arr.size()-1;i++){
            if (arr[i+1]-arr[i]>maxdiff){
                maxdiff=arr[i+1]-arr[i];
            }
            if (i==arr.size()-2){
                maxdiff = max(maxdiff, static_cast<int>((arr[i + 1] - arr[i]) * 2));//avoid narrowing from long long to int
            }
        } 
        cout<<maxdiff<<endl;
    }



    return 0;

}