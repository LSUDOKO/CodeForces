#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, x;
        cin >> n >> x;
        vector<long long> arr(n);
        for (long long i = 0; i < n; i++) {
            cin >> arr[i];
        }

        long long summin = 0;
        long long summax = 0;

        for (int i = 0; i < n; i++) {
            summax += ceil((double)arr[i] / x);
            summin += arr[i];
        }

        long long summinresult = ceil((double)summin / x);
        cout << summinresult << " " << summax << endl;
    }
}
