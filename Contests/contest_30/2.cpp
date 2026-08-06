#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        int t0=0,t1=0,m0=0,m1=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0')t0++;
            else t1++;
            if(i==0||s[i]!=s[i-1]){
                if(s[i]=='0')m0++;
                else m1++;
            }
        }

        int diff=t0-t1,ans=-1;
        for(int d=-1;d<=1;d++){
            if(abs(diff-d)<=1){
                int f1=min(m1,m0-d);
                int f0=f1+d;
                if(f0>=0&&f1>=0&&f0+f1>0)
                    ans=max(ans,f0+f1);
            }
        }

        if(ans==-1)cout<<-1<<"\n";
        else cout<<n-ans<<"\n";
    }
    }
}