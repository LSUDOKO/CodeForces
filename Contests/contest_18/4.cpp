#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> g(n);
    for (int i = 0; i < n; i++) {
        cin >> g[i];
    }
    if (n == 1) {
        cout << g[0] <<endl;
    }
    else{
        long long back = g[0];
        long long my = max(g[0], g[1]);
        long long curr = my;

        for (int i = 2; i < n; i++) {
            curr = max(my, back + g[i]);
            back = my;
            my = curr;
        }
        cout<<curr<<endl;
    }
    
}
