#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isDerangement(const vector<int>& arr) {
    vector<int> sortedArr = arr;
    sort(sortedArr.begin(), sortedArr.end());
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == sortedArr[i]) {
            return false;
        }
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    // If the array has only one element, it's impossible to form a derangement
    if (n == 1) {
        cout << "NO\n";
        return;
    }
    
    // Check if the original array is already a derangement
    if (isDerangement(a)) {
        cout << "YES\n";
        cout << n << "\n";
        for (int num : a) {
            cout << num << " ";
        }
        cout << "\n";
        return;
    }
    
    // Try removing each element once and check
    for (int i = 0; i < n; ++i) {
        vector<int> temp;
        for (int j = 0; j < n; ++j) {
            if (j != i) {
                temp.push_back(a[j]);
            }
        }
        if (isDerangement(temp)) {
            cout << "YES\n";
            cout << temp.size() << "\n";
            for (int num : temp) {
                cout << num << " ";
            }
            cout << "\n";
            return;
        }
    }
    
    // If all elements are the same, it's impossible
    bool allSame = true;
    for (int i = 1; i < n; ++i) {
        if (a[i] != a[0]) {
            allSame = false;
            break;
        }
    }
    if (allSame) {
        cout << "NO\n";
        return;
    }
    
    // If no derangement can be formed
    cout << "NO\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}