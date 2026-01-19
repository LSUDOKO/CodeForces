#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> x(n);
    for (int i = 0; i < n; ++i) {
        cin >> x[i];
    }
    if (n < 3) {
        cout << "no" << endl;
        return 0;
    }

    for (int i = 0; i < n - 1; ++i) {
        int a = min(x[i], x[i+1]);
        int b = max(x[i], x[i+1]);

        for (int j = 0; j < n - 1; ++j) {
            if (i == j) continue;
            int c = min(x[j], x[j+1]);
            int d = max(x[j], x[j+1]);
            if (a < c && c < b && b < d) {
                cout << "yes" << endl;
                return 0;
            }
        }
    }
    cout << "no" << endl;
}