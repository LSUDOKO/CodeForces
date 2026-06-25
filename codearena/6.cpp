 #include <bits/stdc++.h>
  using namespace std;

  using ll = long long;

  int main() {
      ios::sync_with_stdio(false);
      cin.tie(nullptr);

      int t;
      cin >> t;

      while (t--) {
          int n;
          ll k;
          cin >> n >> k;

          vector<ll> pref(n + 1, 0);

          for (int i = 1; i <= n; i++) {
              ll a;
              cin >> a;
              pref[i] = pref[i - 1] + (a - k);
          }

          vector<int> st;
          for (int i = 0; i <= n; i++) {
              if (st.empty() || pref[i] < pref[st.back()]) {
                  st.push_back(i);
              }
          }

          int ans = 0;
          for (int i = n; i >= 0; i--) {
              while (!st.empty() && pref[i] >= pref[st.back()]) {
                  ans = max(ans, i - st.back());
                  st.pop_back();
              }
          }

          cout << ans << '\n';
      }

      return 0;
  }