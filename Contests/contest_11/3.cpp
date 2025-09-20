#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int test = 0; test < t; test++)
    {
        int n;
        string s;
        cin >> n >> s;
        vector<int> rab;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                rab.push_back(i + 1);
            }
        }
        vector<vector<int>> comps;
        if (!rab.empty())
        {
            vector<int> curr = {rab[0]};
            for (size_t j = 1; j < rab.size(); j++)
            {
                if (rab[j] - rab[j - 1] == 2)
                {
                    curr.push_back(rab[j]);
                }
                else
                {
                    comps.push_back(curr);
                    curr = {rab[j]};
                }
            }
            comps.push_back(curr);
        }
        string res = "YES";
        for (const auto &comp : comps)
        {
            int m = comp.size();
            int r1 = comp[0];
            int rm = comp.back();
            bool has_l = (r1 > 1 && s[r1 - 2] == '1');
            bool has_r = (rm < n && s[rm] == '1');
            int req_d1 = has_l ? 1 : -1;
            int req_d1_r = -1;
            if (has_r)
            {
                bool m_odd = (m % 2 == 1);
                req_d1_r = m_odd ? 0 : 1;
            }
            if (req_d1 != -1 && req_d1_r != -1 && req_d1 != req_d1_r)
            {
                res = "NO";
                break;
            }
        }
        cout << res << endl;
    }
    return 0;
}