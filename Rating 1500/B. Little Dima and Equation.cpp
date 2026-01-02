#include<bits/stdc++.h>
using namespace std;
long long sumof(long long x){
    long long sum=0;
    while(x>0){
        sum+=x%10;
        x=x/10;
    }
    return sum;
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    vector<int>ans;
    for(int i=1;i<=81;i++){
        long long x=b*(long long)pow(i,a)+c;
        if (x>0 && x<1e9){
            if (sumof(x)==i){
                ans.push_back(x);
        }
        }
    }
    sort(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    for (int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}