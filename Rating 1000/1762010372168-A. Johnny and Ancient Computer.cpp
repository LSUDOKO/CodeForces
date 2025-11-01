#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long a, b; 
        cin >> a >> b;
        long long arr[3] = {2, 4, 8};
        int count = 0;

        if(a == b){
            cout << 0 << endl;
            continue;
        }

        else if(a > b){
            if(a % b != 0){
                cout << -1 << endl;
                continue;
            }

            long long ratio = a / b;
            if((ratio & (ratio - 1)) != 0){
                cout << -1 << endl;
                continue;
            }

            int i = 2;
            while(i >= 0){
                while(ratio % arr[i] == 0){
                    ratio /= arr[i];
                    count++;
                }
                i--;
            }

            if(ratio != 1) cout << -1 << endl;
            else cout << count << endl;
        }

        else{
            if(b % a != 0){
                cout << -1 << endl;
                continue;
            }

            long long ratio = b / a;
            if((ratio & (ratio - 1)) != 0){
                cout << -1 << endl;
                continue;
            }

            int i = 2;
            while(i >= 0){
                while(ratio % arr[i] == 0){
                    ratio /= arr[i];
                    count++;
                }
                i--;
            }

            if(ratio != 1) cout << -1 << endl;
            else cout << count << endl;
        }
    }
}
