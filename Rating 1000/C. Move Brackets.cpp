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

        int count = 0, moves = 0;
        int i = 0;

        while (i < s.size()) {
            if (s[i] == '(') {
                count++;
                i++;
            } 
            else if (count >= 1 && s[i] == ')') {
                count--;
                i++;
            } 
            else {
                char ch = s[i];   
                s.erase(i, 1);    
                s.push_back(ch);  
                moves++;
                n = s.size();
                
            }
        }

        cout << moves << endl;
    }
}



