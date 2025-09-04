// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int a,b,c;
//         cin>>a>>b>>c;
//         if (a==b && b>c){
//             if (a%c==0) cout<<"YES"<<endl;
//             else cout<<"NO"<<endl;
//             continue;
//         }
//         if (b==c && a<b){
//             if (c%a==0) cout<<"YES"<<endl;
//             else cout<<"NO"<<endl;
//             continue;
//         }
//         if (a==c && b<c){
//             if (c%b==0) cout<<"YES"<<endl;
//             else cout<<"NO"<<endl;
//             continue;
//         }
//         if (2*b==(a+c)) cout<<"YES"<<endl;
//         else if (2*b<(a+c)){
//             if ((a+c)%(2*b)==0) cout<<"YES"<<endl;
//             else cout<<"NO"<<endl;
//         }
//         else if (2*b>(a+c)){ 
//             if ((2*b)%(a+c)==0) cout<<"YES"<<endl;
//             else cout<<"NO"<<endl;
//         }
//         else cout<<"NO"<<endl;
//     }
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        bool ok = false;

        if ((2 * b - c) > 0 && (2 * b - c) % a == 0) ok = true;

        if ((a + c) % (2 * b) == 0) ok = true;

        if ((2 * b - a) > 0 && (2 * b - a) % c == 0) ok = true;

        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
