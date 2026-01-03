#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    int cannotOpen = 0;

    for (int i = 0; i < n; i++) {
        bool openable = false;
        for (int j = 0; j < n; j++) {
            if (i != j && b[j] == a[i]) {
                openable = true;
                break;
            }
        }
        if (!openable) {
            cannotOpen++;
        }
    }

    cout << cannotOpen <<endl;

}
