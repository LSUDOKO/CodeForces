#include<bits/stdc++.h>
using namespace std;
// int main(){
//     long long n;
//     cin>>n;
//     long long count=0;
//     for (long long i=1;i<=n;i++){
//         if (i%2==0){
//             count+=i;
//         }
//         else{
//             count-=i;
//         }
//     }
//     cout<<count;
// }
int main(){
    long long n;
    cin>>n;
    if (n%2==0){
        cout<<n/2;
    }
    else{
        cout<<(n-1)/2-n;
    }
}