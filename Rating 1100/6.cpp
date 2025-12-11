#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        vector<int> res(n);
        
        long long ans = 1;
        long long mod = 1e9+7;
        
        for (int i=0; i<n; i++) cin >> a[i];
        for (int i=0; i<n; i++) cin >> b[i];
        
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        
        int j = 0;
        for (int i=0; i<n; i++){
            while(j < n && a[j] <= b[i]){
                j++;
            }
            res[i] = j; 
        }
        
        sort(res.begin(), res.end());
        
        for (int i=0; i<n; i++){
            if (res[i] - i <= 0) {
                ans = 0;
                break;
            }
            ans = (ans * (res[i] - i)) % mod;
        }
        cout << ans << endl;
    }
}