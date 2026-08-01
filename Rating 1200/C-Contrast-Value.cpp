#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        for (int i=0;i<n;i++){
            int x;
            cin>>x;
            if (v.empty() || v.back()!=x){
                v.push_back(x);
            }
            int m=v.size();
            if (m==1){
                cout<<1<<endl;
                continue;
            }
            int ans=2;
            for (int i=1;i<m-1;i++){
                if ((v[i]>v[i-1] && v[i]>v[i+1]) || (v[i]<v[i-1] && v[i]>v[i+1])){
                    ans++;
                }
            }
            cout<<ans<<endl;

        }
    }
}
