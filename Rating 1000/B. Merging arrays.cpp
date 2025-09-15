// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         map<int,int>first;
//         map<int,int>second;
//         int maxi_first=0;
//         int count_first=0;
//         int maxi_second=0;
//         int count_second=0;
//         vector<int>a(n),b(n);
//         for (int i=0;i<n;i++){
//             cin>>a[i];
//             first[a[i]]++;
//         }
//         for (int i=0;i<n;i++){
//             cin>>b[i];
//             second[b[i]]++;
//         }
//         for (auto ch:first){
//             if (ch.second>=maxi_first){
//                 maxi_first=ch.second;
//                 count_first=ch.first;
//             }
//         }
//         for (auto ch:second){
//             if (ch.second>=maxi_second){
//                 maxi_second=ch.second;
//                 count_second=ch.first;
//             }
//         }
//         int fist_total=maxi_first+second[count_first];
//         int second_total=maxi_second+first[count_second];
//         cout<<max(fist_total,second_total)<<endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        unordered_map<int, int> streakA, streakB;

        int cnt = 1;
        for (int i = 1; i <= n; i++) {
            if (i < n && a[i] == a[i - 1]) {
                cnt++;
            } else {
                streakA[a[i - 1]] = max(streakA[a[i - 1]], cnt);
                cnt = 1;
            }
        }
        cnt = 1;
        for (int i = 1; i <= n; i++) {
            if (i < n && b[i] == b[i - 1]) {
                cnt++;
            } else {
                streakB[b[i - 1]] = max(streakB[b[i - 1]], cnt);
                cnt = 1;
            }
        }

        int ans = 0;    
        for (int x : a) {
            ans = max(ans, streakA[x] + streakB[x]);
        }
        for (int x : b) {
            ans = max(ans, streakA[x] + streakB[x]);
        }

        cout << ans <<endl;
    }
}
