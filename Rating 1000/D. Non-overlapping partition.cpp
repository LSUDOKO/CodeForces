// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;

//         set<char> s1;
//         set<char> s2;
//         int status = n; 

//         for (int i = 0; i < n; i++) {
//             if (s1.find(s[i]) == s1.end()) {
//                 s1.insert(s[i]);
//             } else {
//                 status = i; 
//                 break;
//             }
//         }

//         for (int i = status; i < n; i++) {
//             if (s2.find(s[i]) == s2.end()) {
//                 s2.insert(s[i]);
//             // s2.insert(s[i]);

//         }}

//         cout << s1.size() + s2.size() << endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> prefix_unique(n);
        vector<int> suffix_unique(n);

        // Calculate prefix_unique
        set<char> current_unique_prefix;
        for (int i = 0; i < n; ++i) {
            current_unique_prefix.insert(s[i]);
            prefix_unique[i] = current_unique_prefix.size();
        }

        // Calculate suffix_unique
        set<char> current_unique_suffix;
        for (int i = n - 1; i >= 0; --i) {
            current_unique_suffix.insert(s[i]);
            suffix_unique[i] = current_unique_suffix.size();
        }

        int max_sum = 0;
        // Iterate through all possible split points
        // A split at index 'i' means a = s[0...i] and b = s[i+1...n-1]
        // 'a' will be prefix_unique[i]
        // 'b' will be suffix_unique[i+1]
        // The last valid split point for 'i' is n-2 (to ensure 'b' is non-empty)
        for (int i = 0; i < n - 1; ++i) {
            max_sum = max(max_sum, prefix_unique[i] + suffix_unique[i + 1]);
        }
        cout << max_sum << endl;
    }
    return 0;
}