#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
    cin>>n;
    vector<long long>b(n);
    for(auto &x:b) 
    cin>>x;
    vector<long long>v=b;
    sort(v.begin(),v.end());
    vector<long long>val;
    vector<int>cnt;
    for(auto x:v){
        if(val.empty()||val.back()!=x){
            val.push_back(x);
            cnt.push_back(1);
        }else{
            cnt.back()++;
        }
    }
    if(val[0]!=0){
        cout<<-1<<endl;
        continue;
    }

    int k=val.size();
    vector<long long>ans(k);
    for(int i=1;i<k;i++){
        long long d=val[i]-val[i-1];
        if(d%cnt[i-1]){
            cout<<-1<<endl;
            continue;
        }
        ans[i-1]=d/cnt[i-1];
        if(i>1&&ans[i-1]<=ans[i-2]){
            cout<<-1<<endl;
            continue;
        }
    }
    ans[k-1]=(k==1?1:ans[k-2]+1);
    for(int i=0;i<n;i++){
        cout<<ans[lower_bound(val.begin(),val.end(),b[i])-val.begin()];
        if(i<n-1) 
        cout<<" ";
    }
    cout<<endl;
    }
}