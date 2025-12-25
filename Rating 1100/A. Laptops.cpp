#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>price(n);
    vector<int>qual(n);
    vector<pair<int,int>>ans(n);
    for (int i=0;i<n;i++){
        cin>>ans[i].first;
    }
    for (int i=0;i<n;i++){
        cin>>qual[i].second;
    }
    // for (int i=0;i<n;i++){
    //     ans[i]={price[i],qual[i]};
    // }
    sort(ans.begin(),ans.end());//sort acc to price
    for (int i=1;i<n;i++){
        if (ans[i].second<ans[i-1].second){
            cout<<"Happy Alex"<<endl;
            return 0;
        }
    }
    cout<<"Poor Alex"<<endl;}
    //
    //2nd method
    #include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<int> qual(n + 1);
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        qual[a] = b;
    }
    
    bool happy = false;
    for (int i = 1; i < n; ++i) {
        if (qual[i] > qual[i + 1]) {
            happy = true;
            break;
        }
    }
    
    cout << (happy ? "Happy Alex" : "Poor Alex") << endl;
    return 0;
}
    

