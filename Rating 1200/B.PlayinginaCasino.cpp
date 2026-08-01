#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>a;
        int i=0;
        while(i<n){
            vector<int>sub(m);
            for (int i=0;i<m;i++){
                cin>>sub[i];
            }
            a.push_back(sub);
            i++;
        }

    }
}
