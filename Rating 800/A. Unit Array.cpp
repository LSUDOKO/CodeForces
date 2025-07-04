#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n; 
        vector<int> v(n);
        int countmin = 0;
        int countplux = 0;

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] < 0)
                countmin++;
            else if (v[i] > 0)
                countplux++;
        }
        int ops = 0;
        while (countplux < countmin) {
            ops++;
            countplux++;
            countmin--;
        }
        if (countmin % 2 != 0) {
            ops++;
        }
        cout << ops << endl;
    }
    return 0;
}
