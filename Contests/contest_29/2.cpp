#inlcude<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int a=1;
        for (int i=0;i<n-1;i++){
            if (s[i]!=s[i+1]){
                a++;
            }
        }
        int mini=1;
        for (int i=1;i<n-1;i++){
            int val=(s[i-1]!=s[i+1]?1:0)-(s[i-1]!=s[i]?1:0)-(s[i+1]!=s[i]?1:0);
            if (val<mini){
                mini=val;
            }
        }
        cout<<k+mini<<endl;
    }
}