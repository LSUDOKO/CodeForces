#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        } 

        bool found = false;
        long long x, y;
        if (a[0] == 1) {
            x = 1;
            y = a[1];
            found = true;
        } 
        else {
            for (int i = 0; i < n && !found; i++) {
                for (int j = i + 1; j < n; j++) {
                    if ((a[j] % a[i]) % 2 == 0) {
                        x = a[i];
                        y = a[j];
                        found = true;
                        break;
                    }
                }
            }
        }

        if (found)
            cout<<x<<" "<< y <<endl;
        else
            cout<<-1<<endl;
    }
}
