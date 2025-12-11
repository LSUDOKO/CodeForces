// #include<bits/stdc++.h>
// using namespace std;
// int main(){

//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;

//         vector<int>ans(n);
//         for (int i=0;i<n;i++){
//             cin>>ans[i];
//         }
//         int x;
//         cin>>x;
//         bool check=false;
//         for (int i=0;i<n-1;i++){
//             if ((x>=ans[i] && x<=ans[i+1] )|| (x<=ans[i] && x>=ans[i+1])){
//                 check=true;
//                 break;
//             }
//         }
//         if (check){
//             cout<<"YES"<<endl;
//         }
//         else {
//             cout<<"NO"<<endl;
//         }
//     }
    

// }


#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int>ans(n);
        for (int i=0;i<n;i++){
            cin>>ans[i];
        }
        int x;
        cin>>x;
        int maxi=INT_MIN;
        int mini=INT_MAX;   
        for (int i=0;i<n;i++){
            maxi=max(maxi,ans[i]);
            mini=min(mini,ans[i]);
        }
        if (x>=mini && x<=maxi ){
            cout<<"YES"<<endl;
            
            }
        else{
            cout<<"NO"<<endl;
        }
    

}


}