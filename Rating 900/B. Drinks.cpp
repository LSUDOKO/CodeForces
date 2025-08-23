#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    vector<int> arr(n);
    for (int i=0;i<n;i++){
        cin>>arr[i];
        count+=arr[i];
    }
    cout<<count/n;

}