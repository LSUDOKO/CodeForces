#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        
        int minix = INT_MAX;
        int second_min = INT_MAX;
        long long max_sum = 0; // use long long for safety
        
        vector<int> mini, second;
        
        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;
            vector<int> ans(m);
            for (int j = 0; j < m; j++)
            {
                cin >> ans[j];
            }
            sort(ans.begin(), ans.end());
            mini.push_back(ans[0]);
            second.push_back(ans[1]);
        }
        
        // smallest of all first-minimums
        for (int i = 0; i < n; i++)
        {
            minix = min(minix, mini[i]);
        }
        
        // smallest of all second-minimums
        for (int i = 0; i < n; i++)
        {
            second_min = min(second_min, second[i]);
        }
        
        // sum of all second-minimums
        long long total_second_sum = 0;
        for (int i = 0; i < n; i++)
        {
            total_second_sum += second[i];
        }
        
        // formula: replace smallest second_min with global minix
        max_sum = total_second_sum - second_min + minix;
        
        cout << max_sum << endl;
    }
}
