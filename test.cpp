#include <iostream>
#include <vector>
#include <algorithm>

// Using namespace std; is now active
using namespace std; 

int main(){
    // FIX 1: Correctly declare and initialize the 2D vector
    vector<vector<int>> intervals = {{1,3}, {3,7}, {8,9}};
    
    // FIX 2: Add semicolon and use correct variable types for clarity (auto is fine too)
    sort(intervals.begin(), intervals.end(), [](const vector<int>& p1, const vector<int>& p2){
        // Lexicographical comparison for vectors
        return p1 < p2;
    }); // <-- Semicolon added here
    
    // FIX 3: Manually iterate and print the contents of the 2D vector
    for (const auto& row : intervals) {
        cout << "[";
        // size_t is the preferred type for size/index
        for (size_t i = 0; i < row.size(); ++i) { 
            cout << row[i];
            if (i < row.size() - 1) {
                cout << ", ";
            }
        }
        cout << "] ";
    }
    cout << endl;
    
    return 0;
}