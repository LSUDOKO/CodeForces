// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int>ans(n+1,0);
//     for (int i=1;i<=n;i++){
//         cin>>ans[i];

//     }
//     int m;
//     cin>>m;
//     vector<int>temp=ans;
//     sort(temp.begin()+1,temp.end());
//     while(m--){
//         int t,l,r;
//         cin>>t>>l>>r;
//         long long  sum=0;
//         if (t==1){
//             for (int i=l;i<=r;i++){
//                 sum+=ans[i];
//             }
            
//         }
//         else {
//             // sort(temp.begin(),temp.end());
//             for (int i=l;i<=r;i++){
//                 sum+=temp[i];
//             }
//         }
//         cout<<sum<<endl;
//     }
    

// }

//using prefix sum

#include<bits/stdc++.h>
using namespace std;

int main(){
    

    int n;
    cin >> n;

    vector<long long> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    vector<long long> pref(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        pref[i] = pref[i - 1] + a[i];
    }

    vector<long long> b = a;
    sort(b.begin() + 1, b.end());

    vector<long long> pref_sorted(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        pref_sorted[i] = pref_sorted[i - 1] + b[i];
    }

    int m;
    cin >> m;

    while (m--) {
        int t, l, r;
        cin >> t >> l >> r;

        if (t == 1) {
            cout << pref[l ? r : r] - pref[l - 1] <<endl;
        } else {
            cout << pref_sorted[r] - pref_sorted[l - 1] <<endl;
        }
    }
}
