#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s,t;
    cin>>n>>s>>t;
    
    vector<int>shuffle(n+1,0);
    for (int i=1;i<=n;i++){
        cin>>shuffle[i];
    }
    int count=0;
    int curr=s;
    for (int i=0;i<=n;i++){
        if (curr==t){
            cout<<count<<endl;
            return 0;
        }
        else{
            curr=shuffle[curr];
            count++;
        }
    }
    cout<<-1<<endl;
    
}