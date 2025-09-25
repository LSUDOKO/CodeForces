// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n, k;
//         cin >> n >> k;
//         string s;
//         cin >> s;

//         int miniw = INT_MAX;
//         map<int, int> freq;

//         // build runs of consecutive B
//         for (int i = 0; i < n; i++) {
//             if (s[i] == 'B') {
//                 int j = i;
//                 while (j < n && s[j] == 'B') j++;
//                 freq[i] = j - i;   // start index -> length
//                 i = j - 1;
//             }
//         }

//         // iterate over runs
//         for (auto it = freq.begin(); it != freq.end(); ++it) {
//             auto nextIt = next(it);
//             if (nextIt == freq.end()) continue;

//             int leftStart = it->first;
//             int leftEnd = it->first + it->second - 1;

//             int rightStart = nextIt->first;
//             int rightEnd = nextIt->first + nextIt->second - 1;

//             if ((rightStart - leftStart + 1) >= k) {
//                 if (nextIt->second > 1 && it->second == 1) {
//                     miniw = min(miniw, (rightStart - rightEnd + 1) - leftStart - 1);
//                 }
//                 else if (it->second > 1 && nextIt->second == 1) {
//                     miniw = min(miniw, rightStart - leftEnd - 1);
//                 }
//                 else if (it->second > 1 && nextIt->second > 1) {
//                     miniw = min(miniw, rightStart - leftEnd - 1);
//                 }
//                 else {
//                     miniw = min(miniw, rightStart - leftStart - 1);
//                 }
//             }
//         }

//         if (miniw == INT_MAX) miniw = 0; // fallback
//         cout << miniw << endl;
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         int n, k;
//         cin >> n >> k;
//         string s;
//         cin >> s;

//         int whiteCount = 0;

        
//         for (int i = 0; i < k; i++) {
//             if (s[i] == 'W') whiteCount++;
//         }

//         int ans = whiteCount;


//         for (int i = k; i < n; i++) {
//             if (s[i - k] == 'W') whiteCount--; 
//             if (s[i] == 'W') whiteCount++;
//             ans = min(ans, whiteCount);
//         }

//         cout << ans << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector<pair<int,int>> runs; // store runs of B as (start_index, length)

        // Build runs of B
        for (int i = 0; i < n; i++) {
            if (s[i] == 'B') {
                int j = i;
                while (j < n && s[j] == 'B') j++;
                runs.push_back({i, j - i});
                i = j - 1;
            }
        }

        int ans = k; // worst case: repaint all whites

        // Check all windows of length k
        for (int start = 0; start + k <= n; start++) {
            int end = start + k - 1;
            int bCovered = 0;

            // Iterate through all runs and count overlap with current window
            for (auto &[runStart, len] : runs) {
                int runEnd = runStart + len - 1;
                int overlapStart = max(start, runStart);
                int overlapEnd = min(end, runEnd);
                if (overlapStart <= overlapEnd) {
                    bCovered += (overlapEnd - overlapStart + 1);
                }
            }

            int whites = k - bCovered;
            ans = min(ans, whites);
        }

        cout << ans << "\n";
    }

    return 0;
}
