#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n+1), b(n+1);
        for(int i=1;i<=n;i++)
         cin >> a[i];
        for(int i=1;i<=n;i++) 
        cin >> b[i];

        int A = 0, B = 0;
        for(int i=1;i<=n;i++){
            A ^= a[i];
            B ^= b[i];
        }
        if(A == B){
            cout << "Tie"<<endl;
            continue;
        }
        int last_diff = -1;
        for(int i=n;i>=1;i--){
            if(a[i] != b[i]){
                last_diff = i;
                break;
            }
        }
        if(last_diff % 2 == 1)
        cout << "Ajisai"<<endl;
        else 
        cout << "Mai"<<endl;
    }
}
