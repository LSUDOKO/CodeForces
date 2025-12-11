#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        bool protected(int i){
        for (int j=i;j>=k-1;j--){
            if (j=='1'){
                return true;
            }
            return false;
            }
        }
        int protect=0;
        for (int i=0;i<n;i++){
            if (s[i]=='1' && protect(i)){
            }
            else{
                protect++;
            }
        }
        cout<<protect<<endl;
    }
}