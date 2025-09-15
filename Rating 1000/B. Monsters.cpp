#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long k;
        cin >> n >> k;
        vector<pair<long long, int>> v;
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            long long r = x % k;
            if (r == 0)
                r = k;
            v.push_back({-r, i + 1});
        }
        sort(v.begin(), v.end());
        for (auto &p : v)
            cout << p.second << " ";
        cout << endl;
    }
}
