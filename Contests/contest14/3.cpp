#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> freq(n + 2, 0); 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] <= n + 1) { 
                freq[a[i]]++;
            }
        }
        
        int distinct_below_k = 0; 
        for (int i = 0; i < k; i++) {
            if (freq[i] > 0) {
                distinct_below_k++;
            }
        }
        
        int num_missing = k - distinct_below_k; 
        int count_k = freq[k]; 
        
        cout << max(num_missing, count_k) << endl;
    }
    
    return 0;
}