// #include <bits/stdc++.h>
// using namespace std;
// long long sum(long long  i){
//     long long sum=0;
//     while(i>0){
//         long long  a=i%10;
//         sum+=a;
//         i=i/10;
        
//     }
//     return sum;
// }
// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         long long l,r;
//         cin>>l>>r;
//         long long count=0;
//         for (long long  i=l;i<=r;i++){
//             long long  a=sum(i);
//             if (a%3==0){
//                 count++;
//             }
//         }
//         cout<<count<<endl;
//     }
    
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         long long l,r;
//         cin>>l>>r;
//         long long count=0;
//         for (long long i=l;i<=r;i++){
//             if (i%3==0){
//                 count++;
//                 i=i+3;
//             }
//         }
//         cout<<count<<endl;
        
        
        
//     }}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long l, r;
        cin >> l >> r;

        long long count = (r / 3) - ((l - 1) / 3);
        cout << count << endl;
    }
}
