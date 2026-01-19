#include<bits/tsdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    vector<int>ans(n);
    for (int i=0;i<n;i++){
        cin>>ans[i];
    }
    int left=0;
    long long sum=0;
    int maxi=0;
    for (int i=0;i<n;i++){
        sum+=ans[i];
        while(sum>t && left<=i){
            sum-=a[left];
            left++;
        }
        maxi=max(maxi,i-left+1);
    }
    cout<<maxi<<endl;
}