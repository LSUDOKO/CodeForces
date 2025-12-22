#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long long c;
        cin>>n>>c;
        
        long long  count=0;
        
        vector<int>costs(n);
        for (int i = 0; i < n; i++) {
            long long a;
            cin>>a;
            costs[i]=a+(i+1LL);
}
        sort(costs.begin(),costs.end());
        
        for (int i=0;i<n;i++){
            if (c>=costs[i]){
                count++;
                c=c-costs[i];
            }
        }
        cout<<count<<endl;

    }
}