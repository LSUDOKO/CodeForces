// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n,q;
//     cin>>n>>q;
//     vector<int>ans(n);
//     for (int i=0;i<n;i++){
//         cin>>ans[i];
//     }
//     vector<pair<int,int>>filt(n);
//     for(int i=0; i<n; i++){
//         filt[i] = {i, 0};
//     }
//     while(q--){
//         int l,r;
//         cin>>l>>r;
//         for (int i=l-1;i<r;i++){
//             filt[i].second++;
//         }
//     }
//     sort(filt.begin(),filt.end(),[](const pair<int,int>&a,const pair<int,int>&b){
//         return a.second>b.second;
//     });
//     vector<int>dupli=ans;
//     sort(dupli.rbegin(),dupli.rend());
    
//     long long total_sum = 0;
//     for (int i=0;i<n;i++){
//         total_sum += (long long)dupli[i] * filt[i].second;
//     }   
//     cout<<total_sum<<endl;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;cin>>n>>q;
    vector<long long>a(n),f(n+1,0);
    for(int i=0;i<n;i++)cin>>a[i];
    while(q--){
        int l,r;cin>>l>>r;
        f[l-1]++;f[r]--;
    }
    for(int i=1;i<n;i++)f[i]+=f[i-1];
    f.pop_back();
    sort(a.begin(),a.end());
    sort(f.begin(),f.end());
    long long s=0;
    for(int i=0;i<n;i++)s+=a[i]*f[i];
    cout<<s<<endl;
}