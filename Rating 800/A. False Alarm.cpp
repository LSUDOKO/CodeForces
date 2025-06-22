#include <iostream>
#include <vector>
using namespace std;

bool canPassAllDoors(int n, int x, vector<int>& a) {
    if (x >= n) return true;  // Can pass all doors if button lasts long enough

    for (int start = 0; start <= n - x; ++start) {
        bool ok = true;
        for (int i = 0; i < n; ++i) {
            // Door must be open OR within button effect window
            if (a[i] == 1 && (i < start || i >= start + x)) {
                ok = false;
                break;
            }
        }
        if (ok) return true;
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        cout << (canPassAllDoors(n, x, a) ? "YES\n" : "NO\n");
    }
    return 0;
}
