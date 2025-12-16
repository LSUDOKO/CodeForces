#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; ++i) 
        cin >> a[i];

        long long minVal;
        bool leftKnown = (a[0] != -1);
        bool rightKnown = (a[n-1] != -1);

        if (leftKnown && rightKnown) {
            minVal = llabs(a[n-1] - a[0]);
        } else {
            minVal = 0;
        }
        if (!leftKnown && !rightKnown) {
            for (int i = 0; i < n; ++i) 
            if (a[i] == -1) a[i] = 0;
        } else if (!leftKnown) {
            for (int i = 1; i < n-1; ++i) 
            if (a[i] == -1) a[i] = 0;
            a[0] = a[n-1];
        } else if (!rightKnown) {
            for (int i = 1; i < n-1; ++i) 
            if (a[i] == -1) a[i] = 0;
            a[n-1] = a[0];
        } else {
            for (int i = 1; i < n-1; ++i) 
            if (a[i] == -1) a[i] = 0;
        }

        cout << minVal <<endl;
        for (int i = 0; i < n; ++i) {
            if (i) cout << ' ';
            cout << a[i];
        }
        cout <<endl;
    }
}
