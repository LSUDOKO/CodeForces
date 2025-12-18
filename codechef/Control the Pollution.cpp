#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;
        long long bus = ((long long)n + 99) / 100 * x;
        long long car = ((long long)n + 3) / 4 * y;
        long long full_buses = (long long)n / 100 * x;
        int rem = n % 100;
        long long rem_cars = ((long long)rem + 3) / 4 * y;
        long long mixed = full_buses + rem_cars;
        
        long long mini = min({bus, car, mixed});
        cout << mini << endl;
    }
}