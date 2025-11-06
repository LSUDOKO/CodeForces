// // #include <bits/stdc++.h>
// // using namespace std;
// // using ll = long long;

// // int main() {
// //     int t;
// //     cin >>t;
// //     while(t--){
// //         int n, m;
// //         cin >> n >> m;
// //         vector<ll> a(n);{
// //             for (int i=0;i<n;i++) {
// //                 cin >> a[i];}
// //         }
        
// //         vector<ll> b(m);
// //         for (int i=0;i<m;i++){
// //             cin>>b[i];
// //         }
// //         vector<ll> c(m);
// //         for (int i=0;i<m;i++){
// //             cin>>c[i];
// //         }

// //         vector<pair<ll, ll>> mons(m);
// //         for (int i = 0; i < m; i++) {
// //             mons[i] = {b[i], c[i]};
// //         }

// //         sort(mons.begin(), mons.end(), [](const pair<ll, ll>& p1, const pair<ll, ll>& p2) {
// //             if (p1.first != p2.first) return p1.first < p2.first;
// //             return p1.second > p2.second;
// //         });
// //         multiset<ll> sw;
// //         for (auto x : a) {
// //             sw.insert(x);
// //         }
// //         int ans = 0;
// //         for (auto& p : mons) {
// //             ll bb = p.first, cc = p.second;
// //             auto it = sw.lower_bound(bb);
// //             if (it != sw.end()) {
// //                 ll x = *it;
// //                 sw.erase(it);
// //                 if (cc > 0) {
// //                     sw.insert(max(x, cc));}
// //                 ans++;
// //             }
// //         }
// //         cout<<ans<<endl;
// //     }
// // }

// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int T;
//     cin >> T;

//     while (T--) {
//         int n, m;
//         cin >> n >> m;

//         vector<ll> swords(n);
//         for (int i = 0; i < n; i++) {
//             cin >> swords[i];
//         }

//         vector<ll> life(m), bonus(m);
//         for (int i = 0; i < m; i++) {
//             cin >> life[i];
//         }
//         for (int i = 0; i < m; i++) {
//             cin >> bonus[i];
//         }

//         vector<pair<ll, ll>> monsters(m);
//         for (int i = 0; i < m; i++) {
//             monsters[i] = make_pair(life[i], bonus[i]);
//         }

//         sort(monsters.begin(), monsters.end(), 
//             [](pair<ll, ll> a, pair<ll, ll> b) {
//                 if (a.first != b.first)
//                     return a.first < b.first;
//                 else
//                     return a.second > b.second;
//             });

//         multiset<ll> available;
//         for (int i = 0; i < n; i++) {
//             available.insert(swords[i]);
//         }

//         int kills = 0;

//         for (int i = 0; i < m; i++) {
//             ll required = monsters[i].first;
//             ll reward = monsters[i].second;

//             multiset<ll>::iterator it = available.lower_bound(required);

//             if (it == available.end()) {
//                 continue;
//             }

//             ll current = *it;
//             available.erase(it);

//             if (reward > 0) {
//                 ll newSword = max(current, reward);
//                 available.insert(newSword);
//             }

//             kills++;
//         }

//         cout << kills << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

struct Monster {
    long long b, c;
    bool operator<(const Monster& o) const {
        return b < o.b;
    }
};

void solve() {
    int n, m;
    cin >> n >> m;

    multiset<long long> swords;
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        swords.insert(x);
    }

    vector<Monster> monsters(m);
    for (int i = 0; i < m; i++) cin >> monsters[i].b;
    for (int i = 0; i < m; i++) cin >> monsters[i].c;

    sort(monsters.begin(), monsters.end());

    priority_queue<long long> pq;
    int killed = 0, j = 0;

    while (!swords.empty()) {
        auto x = *swords.begin();
        swords.erase(swords.begin());

        while (j < m && monsters[j].b <= x) {
            pq.push(monsters[j].c);
            j++;
        }

        if (pq.empty()) continue;

        auto c = pq.top();
        pq.pop();

        killed++;
        if (c > 0) swords.insert(max(x, c));
    }

    cout << killed << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
