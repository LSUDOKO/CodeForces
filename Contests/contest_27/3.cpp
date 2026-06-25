#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>final;
        int a=1;
        int b=3*n;
        for (int i=0;i<n;i++){
            final.push_back(a);
            final.push_back(b-1);
            final.push_back(b);
            a++;
            b-=2;
        }
        for (int i=0;i<3*n;i++){
            cout<<final[i]<<" ";
        }
        cout<<endl;
        
    }
}