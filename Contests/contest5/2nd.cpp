#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long n;
        cin >> n;
        
        vector<long long> valid_x;
        
        // Check for different values of k (number of zeros appended)
        for (int k = 1; k <= 18; k++) {
            long long divisor = 1;
            for (int i = 0; i < k; i++) {
                divisor *= 10;
            }
            divisor += 1; // 10^k + 1
            
            if (n % divisor == 0) {
                long long x = n / divisor;
                if (x > 0) {
                    valid_x.push_back(x);
                }
            }
        }
        
        // Sort and remove duplicates (though duplicates shouldn't occur)
        sort(valid_x.begin(), valid_x.end());
        valid_x.erase(unique(valid_x.begin(), valid_x.end()), valid_x.end());
        
        // Output the result
        if (valid_x.empty()) {
            cout << 0 << endl;
        } else {
            cout << valid_x.size() << endl;
            for (int i = 0; i < valid_x.size(); i++) {
                cout << valid_x[i];
                if (i < valid_x.size() - 1) cout << " ";
            }
            cout << endl;
        }
    }
    
    return 0;
}