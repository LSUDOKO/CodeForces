#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        vector<string> grid(10);
        for (int i = 0; i < 10; i++) {
            cin >> grid[i];
        }

        int score = 0;
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (grid[i][j] == 'X') {
                    int ring = min({i, j, 9 - i, 9 - j});
                    score += ring + 1;
                }
            }
        }
        cout << score << endl;
    }

    return 0;
}
