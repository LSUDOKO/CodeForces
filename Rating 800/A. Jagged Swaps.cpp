#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while((t--)>0){
        int n;
        cin>>n;
        vector<int> arr(n);
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<int> sorted_a = arr;  // Copy the vector
        sort(sorted_a.begin(), sorted_a.end());  // Sort it
        bool changed = true;
        while (changed) {
            changed = false;
            for (int i = 1; i < n - 1; i++) {
                if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1]) {
                    swap(arr[i], arr[i + 1]);
                    changed = true;
                }
            }
        }
        if (arr==sorted_a){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        }
        return 0;
    }
