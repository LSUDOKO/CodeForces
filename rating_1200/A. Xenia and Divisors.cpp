#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>ans(8,0);
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        ans[x]++;
    }
    if (ans[5]>0 || ans[7]>0){
        cout<<-1<<endl;
        return 0;
    }
    vector<array<int,3>>res;
    while(ans[1]>0 && ans[3]>0 && ans[6]>0){
        res.push_back({1,3,6});
        ans[1]--;
        ans[3]--;
        ans[6]--;
    }
    while(ans[1]>0 && ans[2]>0 && ans[4]>0){
        res.push_back({1,2,4});
        ans[1]--;
        ans[2]--;
        ans[4]--;
    }
    while(ans[1]>0 && ans[2]>0 && ans[6]>0){
        res.push_back({1,2,6});
        ans[1]--;
        ans[2]--;
        ans[6]--;
    }
    for (int i=0;i<n;i++){
        if (ans[i]!=0){
            cout<<-1<<endl;
            return 0;
        }
    }
    for (int i=0;i<n;i++){
        cout<<res[i][0]<<" "<<res[i][1]<<" "<<res[i][2]<<endl;
    }
}