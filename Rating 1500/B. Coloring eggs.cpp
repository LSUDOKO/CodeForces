#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    long long diff = 0; 
    string result = "";
    result.reserve(n);
    for (int i=0;i<n;++i) {
        int a, g;
        cin >> a >> g;
        if (diff + a <= 500) {
            diff += a;
            result += 'A';
        } else {
            diff -= g;
            result += 'G';
        }
    }
    cout << result << endl;
}