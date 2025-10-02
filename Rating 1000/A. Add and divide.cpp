#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int ans = INT_MAX;

        for (int add = 0; add <= 30; add++)
        {
            int bb = b + add;
            if (bb == 1)
                continue;
            int cnt = add;
            int aa = a;
            while (aa > 0)
            {
                aa /= bb;
                cnt++;
            }
            ans = min(ans, cnt);
        }
        cout << ans << endl;
    }
}
