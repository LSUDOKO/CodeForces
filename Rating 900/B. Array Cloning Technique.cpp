#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        map<int, int> freq;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            freq[arr[i]]++;
        }

        int countmaxi = 0;
        for (auto &p : freq) {
            countmaxi = max(countmaxi, p.second);
        }

        int operations = 0;
        int curr = countmaxi;

        while (curr < n) {
            operations++;
            int can_fill = min(curr, n - curr);
            curr += can_fill;
        }

        cout << operations + (n - countmaxi) << endl;
    }
}
