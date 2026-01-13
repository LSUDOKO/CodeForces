// #include<bits/stdc++.h>
// using namespace std;
// void red(int &r,int &sum){
//     sum+=(r/3);
//     r=r%3;
// }
// void blue(int &b,int &sum){
//     sum+=(b/3);
//     b=b%3;
// }
// void green(int &g,int &sum){
//     sum+=(g/3);
//     g=g%3;
// }
// void combine(int r,int b,int g,int &sum){
//     if (r==0|| b==0 || g==0){
//         return;
//     }
//     else if (r==1 || b==1 || g==1){
//         sum++;
//     }
//     else {
//         sum+=2;
//     }
// }
// int main(){
//     int r,g,b;
//     cin>>r>>g>>b;
//     int sum=0;
//     red(r,sum);
//     blue(b,sum);
//     green(g,sum);
//     combine(r,b,g,sum);
//     cout<<sum<<endl;

// }


#include <bits/stdc++.h>
using namespace std;

long long solve(long long r, long long g, long long b) {
    long long sum = 0;
    sum += r / 3;
    sum += g / 3;
    sum += b / 3;
    r %= 3;
    g %= 3;
    b %= 3;

    sum += min({r, g, b});
    return sum;
}

int main() {
    long long r, g, b;
    cin >> r >> g >> b;

    long long ans = 0;
    for (int x = 0; x <= 2; x++) {
        if (r >= x && g >= x && b >= x) {
            ans = max(ans, solve(r - x, g - x, b - x) + x);
        }
    }

    cout << ans << endl;
}
