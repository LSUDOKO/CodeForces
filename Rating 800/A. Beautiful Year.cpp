#include <bits/stdc++.h>
using namespace std;

bool distinct(int y) {
    string s = to_string(y);
    return set<char>(s.begin(), s.end()).size() == s.size();
}

int main() {
    
    int y; 
    if (!(cin >> y)) return 0;
    for (int nxt = y + 1;; ++nxt) {
        if (distinct(nxt)) {
            cout << nxt << '\n';
            break;
        }
    }
    return 0;
}
