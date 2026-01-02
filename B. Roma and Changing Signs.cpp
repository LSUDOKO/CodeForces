// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,k;
//     cin>>n>>k;
//     vector<int>ans(n);
//     int mini=INT_MAX;
//     for(int i=0;i<n;i++){
//         cin>>ans[i];
//         mini=min(abs(ans[i]),mini);
//     }
//     int check=false;
//     int total=0;
//     sort(ans.begin(),ans.end());
//     for (int i=0;i<n;i++){
//         if (k>0 &&  ans[i]<0){
//             ans[i]=-ans[i];
//             k--;
//         }
//         else if (k<=0){
//             break;
//         }
//         else{
//             if (k%2!=0){
//                 check=true;
//             }
//         }
        
//     }
//     if (check){
//             for (int i=0;i<n;i++){
//                 total+=ans[i];
                
//             }
//             cout<<(total-mini);

//         }
//     else{
//             for (int i=0;i<n;i++){
//                 total+=ans[i];
                
//             }
//             cout<<total;
//         }
// }
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    vector<int> ans(n);
    for(int i = 0; i < n; i++){
        cin >> ans[i];
    }

    sort(ans.begin(), ans.end());

    int i = 0;
    while(i < n && k > 0 && ans[i] < 0){
        ans[i] = -ans[i];
        k--;
        i++;
    }

    int total = 0;
    int mini = INT_MAX;

    for(int i = 0; i < n; i++){
        total += ans[i];
        mini = min(mini, ans[i]);
    }

    if(k % 2 == 1){
        total -= 2 * mini;  
    }

    cout << total;
}
