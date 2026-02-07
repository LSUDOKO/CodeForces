#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p;
    string s;
    cin>>n>>p;
    cin>>s;
    p--;
    if (p>=n/2){
        p=n-1-p;
    }
    int total=0;
    int first=n/2-1;
    int l=-1;
    int r=-1;
    for (int i=0;i<=first;i++){
        int j=n-1-i;
        if (s[i]!=s[j]){
            int diff=abs(s[i]-s[j]);
            total+=min(diff,26-diff);
            if (l==-1){
                l=i;
            }
            r=i;
        }
        
    }
    if (l==-1){
        cout<<0<<endl;
        return 0;
    }
    int move=0;
    if(p<=l){
        move=r-p;
    }else if (p>=r){
        move=p-l;
    }
    else{
        move=r-l+min(r-p,p-l);
    }
    cout<<total+move<<endl;
}