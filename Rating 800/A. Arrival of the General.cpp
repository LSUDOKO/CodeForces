#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int h[n];
    for(int i = 0; i < n; i++) cin >> h[i];

    int maxH = -1, minH = 101;
    int maxPos = 0, minPos = 0;

    for(int i = 0; i < n; i++) {
        if(h[i] > maxH) {
            maxH = h[i];
            maxPos = i;
        }
    }

    for(int i = n-1; i >= 0; i--) {
        if(h[i] < minH) {
            minH = h[i];
            minPos = i;
        }
    }

    int swaps = maxPos + (n - 1 - minPos);
    if(maxPos > minPos) swaps--; 

    cout << swaps << endl;
}
