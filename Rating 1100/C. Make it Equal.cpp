#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {

        int n;
        long long k;
        cin >> n >> k;

        vector<long long> S(n), T(n);
        for (auto &x : S) cin >> x;
        for (auto &x : T) cin >> x;

        map<long long, long long> freqS, freqT;

        for (long long x : S) freqS[x % k]++;
        for (long long x : T) freqT[x % k]++;

        set<long long> allRem;
        for (auto &p : freqS) allRem.insert(p.first);
        for (auto &p : freqT) allRem.insert(p.first);

        set<long long> visited;
        bool ok = true;

        for (long long d : allRem) {

            if (visited.count(d)) continue;

            long long a = d;
            long long b = (k - d) % k;

            if (a > b) swap(a, b);

            long long sA = freqS.count(a) ? freqS[a] : 0;
            long long sB = (a == b ? 0 : (freqS.count(b) ? freqS[b] : 0));
            long long tA = freqT.count(a) ? freqT[a] : 0;
            long long tB = (a == b ? 0 : (freqT.count(b) ? freqT[b] : 0));

            if (sA + sB != tA + tB) {
                ok = false;
                break;
            }

            visited.insert(a);
            visited.insert(b);
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
}
