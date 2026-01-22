// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string a;
//     string b;
//     cin>>a>>b;
//     if(a.size()!=b.size()){
//         cout<<"NO";
//         return 0;
//     }
//     bool checka=false;
//     bool checkb=false;
//     for(char c: a){
//         if(c=='1'){
//             checka=true;
//             break;
//         }
//     }
//     for(char c :b){
//         if (c=='1'){
//             checkb=false;
//             break;
//         }
//     }
//     if (checka==checkb){
//         cout<<"YES";
//     }
//     else {
//         cout<<"NO";
//     }
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    string b;
    cin>>a>>b;
    if(a.size()!=b.size()){
        cout<<"NO";
        return 0;
    }
    int counta1=0;
    int countb1=0;
    for (int i=0;i<a.size();i++){
        if (a[i]=='1'){
            counta1++;
        }
        if (b[i]=='1'){
            countb1++;
        }
    }
    if (abs(counta1-countb1)>=2){
        cout<<"NO";
    }
    else {
        cout<<"YES";
    }
}