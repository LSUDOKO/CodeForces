#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        set<char> s1;
        set<char> s2;
        int status = n; 

        for (int i = 0; i < n; i++) {
            if (s1.find(s[i]) == s1.end()) {
                s1.insert(s[i]);
            } else {
                status = i; 
                break;
            }
        }

        for (int i = status; i < n; i++) {
            if (s2.find(s[i]) == s2.end()) {
                s2.insert(s[i]);
            // s2.insert(s[i]);

        }}

        cout << s1.size() + s2.size() << endl;
    }
    return 0;
}
