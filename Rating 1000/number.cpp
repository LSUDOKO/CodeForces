#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long a = n;  
        
        while (true) {
            long long temp = a;   
            bool flag = true;     
            
            while (temp > 0) {
                long long no = temp % 10;
                if (no != 0 && a % no != 0) {
                    flag = false; 
                    break;
                }
                temp /= 10;
            }

            if (flag) {  
                cout << a << endl;
                break;
            } else {
                a++;
            }
        }
    }
}
