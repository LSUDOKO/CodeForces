#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int count = 0;
        vector<char> ans(n);
        for (int i = 0; i < n; i++){

        cin >> ans[i];}

        for (int i = 0; i < n; i++) {
            if (ans[i]=='G') {
                bool found = false;
                for (int j = i + 1; j <= i + k && j < n; j++) {  
                    if (ans[j] == 'G') {
                        found = true;
                        i = j - 1;  
                        break;
                    }
                }
                if (!found) {
                    count++; }
            }
        }

        bool check = false;
        for (int i = 0; i < n; i++) {
            if (ans[i] == 'G') {
                check = true;
                break;
            }
        }

        if (!check){
            cout << 0 << endl;
        } 
        else {
            cout << count << endl;}
    }
}
