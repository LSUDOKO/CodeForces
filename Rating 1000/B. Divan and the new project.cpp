// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         vector<int> ans(n);
//         for (int i=0;i<n;i++){
//             cin>>ans[i];
//         }
//         vector<pair<int,int>>a;
//         for (int i=0;i<n;i++){
//             a.push_back({ans[i],i});
//         }
//         sort(a.rbegin(),a.rend());
//         vector<int>final(n+1,0);
//         ans[0]=0;
//         int mini=0;
//         int cor=1;
//         for (int i=0;i<n;i++){
//             final[a[i].second+1]=cor;
//             mini+=(2*abs(cor)*a[i].first);
//             if (cor<0){
//                 cor=abs(cor)+1;
//             }
//             else{
//                 cor=-cor;
//             }
//         }
//         cout<<mini<<endl;
//         for (auto it:final){
//             cout<<it<<" ";
//         }
//         cout<<endl;

//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);

int t;
cin >> t;
while (t--) {
    int n;
    cin >> n;
    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
        cin >> ans[i];
    }

    vector<pair<int, int>> a;
    for (int i = 0; i < n; i++) {
        a.push_back({ans[i], i});
    }
    sort(a.rbegin(), a.rend());

    vector<int> final(n + 1, 0);
    long long mini = 0;
    int cor = 1;

    for (int i = 0; i < n; i++) {
        final[a[i].second + 1] = cor;
        mini += (2LL * abs(cor) * a[i].first);

        if (cor > 0) cor = -cor;
        else cor = -(cor) + 1;
    }

    cout << mini << endl;
    for (int i = 0; i <= n; i++) {
        cout << final[i] << " ";
    }
    cout <<endl;
}
return 0;
}
