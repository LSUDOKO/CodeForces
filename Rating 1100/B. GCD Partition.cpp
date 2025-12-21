#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long >ans(n);
        for (long long  i=0;i<n;i++){
            cin>>ans[i];
        }
        long long sum=0;
        long long  total_sum=accumulate(ans.begin(),ans.end(),0LL);
        long long result =0;
        for (long long  i=0;i<n-1;i++){
            sum+=ans[i];
            result=max(result,__gcd(sum,total_sum-sum));
        }
        cout<<result<<endl;
    }

}