// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int total=0;
//     vector<int>ans(n+1,0);
//     for (int i=1;i<=n;i++){
//         cin>>ans[i];
//         total+=ans[i];
//     }
    
//     while(m--){
//         int t;
//         cin>>t;
//         if (t==1){
//             int v,x;
//             cin>>v>>x;
//             ans[v]=x;
//         }
//         else if (t==2){
//             int y;
//             cin>>y;
//             for (int i=1;i<=n;i++){
//                 ans[i]=ans[i]+y;
//             }
//         }
//         else{
//             int q;
//             cin>>q;
//             cout<<ans[q]<<endl;
//         }

//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<long long> ans(n+1, 0);
    long long addAll = 0;

    for (int i = 1; i <= n; i++){
        cin >> ans[i];
    }

    while (m--){
        int t;
        cin >> t;

        if (t == 1){
            int v;
            long long x;
            cin >> v >> x;
            ans[v] = x - addAll;
        }
        else if (t == 2){
            long long y;
            cin >> y;
            addAll += y;
        }
        else{
            int q;
            cin >> q;
            cout << ans[q] + addAll << endl;
        }
    }
}
