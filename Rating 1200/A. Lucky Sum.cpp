#include<bits/stdc++.h>
using namespace std;

vector<long long> lucky;

void gen(long long x){
    if(x>10000000000LL)return;
    if(x)lucky.push_back(x);
    gen(x*10+4);
    gen(x*10+7);
}

int main(){
    long long l,r;
    cin>>l>>r;

    gen(0);
    sort(lucky.begin(),lucky.end());

    long long cur=l,ans=0;

    for(long long x:lucky){
        if(x<cur)continue;
        if(cur>r)break;
        long long upto=min(r,x);
        ans+=(upto-cur+1)*x;
        cur=x+1;
    }

    cout<<ans;
}
