#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases
    
    while (t--) {
        long long n;
        cin >> n;  
        
        if (n < 3) {
            cout << 0 << endl;  
        } else {
            cout << (n - 1) / 2 << endl;  
        }
    }
    
    return 0;
}
