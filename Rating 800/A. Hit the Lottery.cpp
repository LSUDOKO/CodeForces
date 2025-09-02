// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     long long n;
//     cin >> n;
//     int count = 0;
//     int bills[] = {100, 20, 10, 5, 1};

//     for (int i = 0; i < 5; i++) {
//         count += n / bills[i];
//         n %= bills[i];
//     }

//     cout << count << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    int count = 0;

    while (n > 0) {
        if (n >= 100) {
            count += n / 100;
            n %= 100;
        } 
        else if (n >= 20) {
            count += n / 20;
            n %= 20;
        } 
        else if (n >= 10) {
            count += n / 10;
            n %= 10;
        } 
        else if (n >= 5) {
            count += n / 5;
            n %= 5;
        } 
        else {
            count += n;   
            n = 0;
        }
    }

    cout << count << endl;
    return 0;
}
