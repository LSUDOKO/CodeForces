#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int test = 0; test < t; ++test)
    {
        int n;
        cin >> n;
        vector<vector<int>> adj(n + 1);
        vector<int> indeg(n + 1, 0);
        for (int i = 0; i < n - 1; ++i)
        {
            int u, v, x, y;
            cin >> u >> v >> x >> y;
            if (x > y)
            {
                adj[u].push_back(v);
                indeg[v]++;
            }
            else
            {
                adj[v].push_back(u);
                indeg[u]++;
            }
        }
        queue<int> q;
        for (int i = 1; i <= n; ++i)
        {
            if (indeg[i] == 0)
            {
                q.push(i);
            }
        }
        vector<int> order;
        while (!q.empty())
        {
            int u = q.front();
            q.pop();
            order.push_back(u);
            for (int v : adj[u])
            {
                indeg[v]--;
                if (indeg[v] == 0)
                {
                    q.push(v);
                }
            }
        }
        vector<int> p(n + 1);
        for (int i = 0; i < n; ++i)
        {
            p[order[i]] = n - i;
        }
        for (int i = 1; i <= n; ++i)
        {
            cout << p[i];
            if (i < n)
                cout << " ";
            else
                cout << endl;
        }
    }
    return 0;
}