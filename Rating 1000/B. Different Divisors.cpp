#include<bits/stdc++.h>
using namespace std;

bool check(int y){
    if (y < 2) return false;
    for (int i = 2; i * i <= y; i++){
        if (y % i == 0) return false;
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int d;
        cin >> d;
        int x = 1;
        int y = x + d;
        int z = 0;
        int result = 0;

        bool firstFound = false;

        while(true){
            if (!firstFound) {
                if (check(y)) {
                    z = y + d;
                    firstFound = true;
                } else {
                    y++;
                }
            } 
            else {
                if (check(z)) {
                    result = y * z;
                    break;
                } else {
                    z++;
                }
            }
        }
        cout << result << endl;
    }
}
