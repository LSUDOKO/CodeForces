#include<bits/stdc++.h>
using namespace std;
int main(){
//     long long t;
//     cin>>t;
//     while(t--){
//         long long a,b;
//         cin>>a>>b;
//         long long count=0;
//         while(a%b!=0){
//             a++;
//             count++;
//         }
//         cout<<count<<endl;
//     }
//  
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;

        long long r = a % b;
        if (r == 0) cout << 0 << "\n";
        else cout << b - r << "\n";
    }
    return 0;
}