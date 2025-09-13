// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin>>t;
//     while(t--){
//         long long n,m,x,y;
//         cin>>n>>m>>x>>y;
//         vector<int> hori(n),verti(m);
//         for (long long i=0;i<n;i++){
//             cin>>hori[i];
//         }
//         for (long long i=0;i<m;i++){
//             cin>>verti[i];
//         }
//         cout<<min(n+m ,max(n,m)+1)<<endl;
//     }
// }

#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n, m, x, y;
        cin >> n >> m >> x >> y;
        for (long long i = 0; i < n + m; ++i) {
            long long tmp;
            cin >> tmp;
        }

        cout << n + m << endl;
    }

    return 0;
}
