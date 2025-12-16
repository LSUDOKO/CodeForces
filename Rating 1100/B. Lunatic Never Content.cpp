#include<bits/stdc++.h>
using namespace std;
bool palindrome(vector<int>&a,int n){
        int i=0;
        while(i<n/2){
            if (a[i]!=a[n-1-i]){
                return false;
            }
            i++;
        }
        return true;
    }
int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(palindrome(a,n)){
            cout<<0<<endl;
        }
        else{
            cout<<abs(a[0]-a[n-1])<<endl;
        }
    }
}