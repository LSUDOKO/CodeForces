#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++){
        cin >> a[i];
    }

        int N = 2*n + 10;
        vector<int> v(N), L(N), R(N), A(N);
        set<tuple<int,int,int>> S;
        int id = n;

        for (int i = 0; i < n; i++) {
            v[i] = a[i];
            L[i] = (i == 0 ? n-1 : i-1);
            R[i] = (i+1) % n;
            A[i] = 1;
        }

        for (int i = 0; i < n; i++) {
            int j = R[i];
            S.insert({max(v[i], v[j]), i, j});
        }

        long long c = 0;
        int m = 0;

        while (m < n-1) {
            if (S.empty()) break;

            auto [x, i, j] = *S.begin();
            S.erase(S.begin());

            if (!A[i] || !A[j] || R[i] != j) 
            continue;

            c += x;
            m++;

            int k = id++;
            v[k] = max(v[i], v[j]);

            int p = L[i];
            int q = R[j];

            if (p != -1) R[p] = k;
            L[k] = p;
            R[k] = q;
            if (q != -1) L[q] = k;

            A[i] = A[j] = 0;
            A[k] = 1;

            if (p != -1) 
            S.insert({max(v[p], v[k]), p, k});
            if (q != -1 && q != k)
            S.insert({max(v[k], v[q]), k, q});
        }
        cout<<c<<endl;
    }
}
