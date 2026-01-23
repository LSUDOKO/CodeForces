// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<vector<int>>mp(3);
//     vector<int>ans(n);
//     for (int i=0;i<n;i++){
//         cin>>ans[i];
//         if (ans[i]>0){
//             mp[0].push_back(ans[i]);
//         }
//         else if (ans[i]<0){
//             mp[1].push_back(ans[i]);
//         }
//         else{
//             mp[2].push_back(ans[i]);
//         }
//     }
//     if ((mp[1].size()%2==0)){
//         cout << 1 << " " << mp[1][0] << endl;
//         cout << mp[0].size()+mp[1].size()-1<< " ";

//         for (int i=0;i<mp[0].size();i++){
//             cout<<mp[0][i]<<" ";
//         }
//         for (int i=1;i<mp[1].size();i++){
//             cout<<mp[1][i]<<" ";
//         }
//         cout<<endl;
//         cout<<mp[2].size()<<" ";
//         for (int i=0;i<mp[2].size();i++){
//             cout<<mp[2][i]<<" ";
//         }
//     }
//     else {
//         cout << 1 << " " << mp[1][0] << endl;
//         cout << mp[0].size() + mp[1].size() - 2 << " ";
        
//         for (int i=0;i<mp[0].size();i++){
//             cout<<mp[0][i]<<" ";
//         }
//         for (int i=1;i<mp[1].size()-1;i++){
//             cout<<mp[1][i]<<" ";
//         }
//         cout<<endl;
//         cout<<mp[2].size()+1<<" ";
//         for (int i=0;i<mp[2].size();i++){
//             cout<<mp[2][i]<<" ";
//         }
//         cout<<mp[1].back();
        
//     }
    
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<vector<int>> mp(3);
    for (int i=0; i<n; i++){
        int val;
        cin >> val;
        if (val > 0) mp[0].push_back(val);
        else if (val < 0) mp[1].push_back(val);
        else mp[2].push_back(val);
    }
    cout << 1 << " " << mp[1][0] << endl;
    if (mp[0].size() > 0) {
        cout << 1 << " " << mp[0][0] << endl;
        mp[0].erase(mp[0].begin());
    } else {
        cout << 2 << " " << mp[1][1] << " " << mp[1][2] << endl;
        mp[1].erase(mp[1].begin() + 1, mp[1].begin() + 3);
    }
    mp[1].erase(mp[1].begin());
    int total_remaining = mp[0].size() + mp[1].size() + mp[2].size();
    cout << total_remaining;
    for (int x : mp[0]) cout << " " << x;
    for (int x : mp[1]) cout << " " << x;
    for (int x : mp[2]) cout << " " << x;
    cout << endl;
}