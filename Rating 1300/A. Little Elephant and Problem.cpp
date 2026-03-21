#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>sorted_a(n);
    for (int i =0;i<n;++i) {
        cin>>a[i];
        sorted_a[i]=a[i];
    }
    sort(sorted_a.begin(),sorted_a.end());
    int diff_count=0;
    for (int i = 0; i < n; ++i) {
        if (a[i]!=sorted_a[i]) {
            diff_count++;
        }
    }
    if (diff_count<= 2) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }

    return 0;
}