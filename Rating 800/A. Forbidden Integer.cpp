#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k, x;
        cin >> n >> k >> x;

        // Case where we can fill array with all 1's
        if (x != 1) {
            cout << "YES" << endl;
            cout << n << endl;
            for (int i = 0; i < n; i++) {
                cout << 1 << " ";
            }
            cout << endl;
        } 
        else {
            
            if (k == 1 || (k == 2 && n % 2 == 1)) {
                cout << "NO" << endl;
            } 
            else {
                cout << "YES" << endl;
                if (n % 2 == 0) {
                    cout << n / 2 << endl;
                    for (int i = 0; i < n / 2; i++) {
                        cout << 2 << " ";
                    }
                    cout << endl;
                } 
                else {
                    cout << (n - 3) / 2 + 1 << endl;
                    for (int i = 0; i < (n - 3) / 2; i++) {
                        cout << 2 << " ";
                    }
                    cout << 3 << endl;
                }
            }
        }
    }
    return 0;
}
