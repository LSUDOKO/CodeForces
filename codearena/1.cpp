#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        ll k;
        cin>>n >>k;
        vector<ll>ans(n + 1, 0);
        for (int i= 1; i <= n; i++) {
            ll a;
            cin>>a;
            ans[i]=ans[i-1]+(a-k);
        }
        vector<int>st;
        for (int i=0;i<=n;i++) {
            if (st.empty()||ans[i]<ans[st.back()]) {
                st.push_back(i);
            }
        }
        int answer=0;
        for (int j=n;j>=0;j--) {
            while (!st.empty() && ans[j] >= ans[st.back()]) {
                answer=max(answer,j-st.back());
                st.pop_back();
            }
        }
        cout<<answer<<endl;}}
