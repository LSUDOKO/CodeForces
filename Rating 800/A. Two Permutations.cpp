#include <iostream>
using namespace std;
void solve() {
    int n, a, b;
    cin >> n >> a >> b;
    if (a + b <= n - 2 || (a == n && b == n)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}