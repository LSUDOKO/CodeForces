#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> ans;
    long long arr[4];
    for (int i=0; i<4;i++){
        cin>>arr[i];
        ans.insert(arr[i]);
    }
    cout<<4-(ans.size());

}