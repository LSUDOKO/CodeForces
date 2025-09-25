#include <bits/stdc++.h>

using namespace std;

long long get_cost(const vector<int> &pos, int n)
{
    int k = pos.size();
    if (k == 0)
        return 0;
    vector<long long> a(k);
    for (int i = 0; i < k; i++)
    {
        a[i] = pos[i] - i;
    }
    sort(a.begin(), a.end());
    int low_idx = (k - 1) / 2;
    int high_idx = k / 2;
    long long min_val = 0;
    for (int i = 0; i < k; i++)
    {
        min_val += abs(a[i] - a[low_idx]);
    }
    int M = n - k + 1;
    long long cost;
    if (a[high_idx] < 1)
    {
        cost = 0;
        for (auto x : a)
            cost += abs(x - 1LL);
    }
    else if (a[low_idx] > M)
    {
        cost = 0;
        for (auto x : a)
            cost += abs(x - (long long)M);
    }
    else
    {
        cost = min_val;
    }
    return cost;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int test = 0; test < t; test++)
    {
        int n;
        string s;
        cin >> n >> s;
        vector<int> pos_a, pos_b;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'a')
                pos_a.push_back(i + 1);
            else
                pos_b.push_back(i + 1);
        }
        long long cost_a = get_cost(pos_a, n);
        long long cost_b = get_cost(pos_b, n);
        cout << min(cost_a, cost_b) <<endl;
    }
    return 0;
}