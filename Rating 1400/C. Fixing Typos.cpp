// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     int count=0;
//     for (int i=0;i<s.size()-1;i++){
//         if (s[i]==s[i+1]){
//             count++;
//         }

//     }
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    string t;

    for (char c : s) {
        int n = t.size();

        if (n >= 2 && t[n-1] == c && t[n-2] == c)
            continue;

        if (n >= 3 && t[n-1] == c && t[n-2] == t[n-3])
            continue;

        t.push_back(c);
    }

    cout << t << "\n";
    return 0;
}
