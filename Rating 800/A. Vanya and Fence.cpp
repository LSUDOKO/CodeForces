#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,h;
    cin>>n>>h;
    int sum=0;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for (int i=0;i<n;i++){
        if (a[i]>h){
            sum+=2;
        } else {
            sum+=1;
        }
    }
    cout<<sum<<endl;
}