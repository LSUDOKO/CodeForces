#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        map<ll, ll, greater<ll>> valcnt;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            valcnt[x]++;
        }

        ll alice = 0, bob = 0;
        bool aliceTurn = true;

        while (!valcnt.empty())
        {
            auto it = valcnt.begin();
            ll v = it->first;
            ll c = it->second;
            valcnt.erase(it);

            ll v2 = (valcnt.empty() ? 0LL : valcnt.begin()->first);
            ll delta = v - v2;

            ll ma, mb;
            if (aliceTurn)
            {
                ma = (delta + 1) / 2;
                mb = delta / 2;
            }
            else
            {
                mb = (delta + 1) / 2;
                ma = delta / 2;
            }

            alice += c * ma;
            bob += c * mb;

            if (delta % 2 == 1)
                aliceTurn = !aliceTurn;

            if (v2 > 0)
                valcnt[v2] += c;
        }

        cout << alice << " " << bob <<endl;
    }
    return 0;
}
