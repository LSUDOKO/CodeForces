#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n;
        
        string a;
        cin >> a;
        
        cin >> m;
        
        string b, c;
        cin >> b >> c;
        
        string result = a;
        
        for (int i = 0; i < m; i++) {
            if (c[i] == 'V') {
                result = b[i] + result;
            } else {
                result += b[i];
            }
        }
        
        cout << result << endl;
    }
    
    return 0;
}