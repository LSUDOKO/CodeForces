#include <bits/stdc++.h>
using namespace std;
int main() {
    int m, n;
    cin>>m>>n;
    long double expected =0.0;
    for (int k=1;k<=m;k++){
        long double p=(long double)(k - 1)/m;
        expected+=1.0-pow(p, n);
    }
    cout<<fixed<<setprecision(12)<<(double)expected<<endl;
}
