#include<bits/stdc++.h>
using namespace std;

bool isBeautiful(const vector<int>& a) {
    int sum = 0;
    for (int i = 1; i < a.size(); ++i) {
        sum += a[i-1];
        if (a[i] == sum) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        if (isBeautiful(a)) {
            cout << "YES\n";
            for (int num : a) {
                cout << num << " ";
            }
            cout << "\n";
            continue;
        }
        
        // Try to reorder by placing the smallest element first
        vector<int> b = a;
        sort(b.begin(), b.end());
        if (isBeautiful(b)) {
            cout << "YES\n";
            for (int num : b) {
                cout << num << " ";
            }
            cout << "\n";
            continue;
        }
        
        // If all elements are the same and greater than 1, it's impossible
        bool allSame = true;
        for (int i = 1; i < n; ++i) {
            if (a[i] != a[0]) {
                allSame = false;
                break;
            }
        }
        if (allSame && a[0] != 1) {
            cout << "NO\n";
            continue;
        }
        
        // Another approach: move the first element to the end
        rotate(b.begin(), b.begin() + 1, b.end());
        if (isBeautiful(b)) {
            cout << "YES\n";
            for (int num : b) {
                cout << num << " ";
            }
            cout << "\n";
            continue;
        }
        
        // If still not beautiful, try reversing the array
        reverse(b.begin(), b.end());
        if (isBeautiful(b)) {
            cout << "YES\n";
            for (int num : b) {
                cout << num << " ";
            }
            cout << "\n";
            continue;
        }
        
        // If none of the above works, try swapping the first two elements
        if (n >= 2) {
            swap(b[0], b[1]);
            if (isBeautiful(b)) {
                cout << "YES\n";
                for (int num : b) {
                    cout << num << " ";
                }
                cout << "\n";
                continue;
            }
        }
        
        // As a last resort, try random shuffles (limited attempts for efficiency)
        bool found = false;
        for (int attempt = 0; attempt < 100; ++attempt) {
            random_shuffle(b.begin(), b.end());
            if (isBeautiful(b)) {
                cout << "YES\n";
                for (int num : b) {
                    cout << num << " ";
                }
                cout << "\n";
                found = true;
                break;
            }
        }
        
        if (!found) {
            cout << "NO\n";
        }
    }
    return 0;
}