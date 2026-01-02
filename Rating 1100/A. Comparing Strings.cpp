// #include<bitstdc++.h>
// using namespace std;
// int main(){
//     string s1;
//     string s2;
//     cin>>s1>>s2;
//     vector<pair<int,int>>ans;
//     for (int i=0;i<s1.size();i++){
//         if (s1[i]!=s2[i]){
//             ans.push_back([s1[i],s2[i]]);

//         }
//     }
//     if (ans.size()!=2){
//         cout<<"NO"<<endl;
//     }
//     else{
//         if(ans[0][0]==ans[1][1] && ans[0][1]==ans[1][0]){
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    if (s1.size() != s2.size()) {
        cout << "NO\n";
        return 0;
    }

    vector<int> diff;

    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] != s2[i]) {
            diff.push_back(i);
        }
    }

    if (diff.size() != 2) {
        cout << "NO";
        return 0;
    }


    int i = diff[0], j = diff[1];
    if (s1[i] == s2[j] && s1[j] == s2[i]) {
        cout << "YES";
    } else {
        cout << "NO";
    }

}
