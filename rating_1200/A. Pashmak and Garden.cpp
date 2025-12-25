// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int x1,y1,x2,y2;
//     cin>>x1>>y1>>x2>>y2;
//     if(x1==y1){
//         if (x2==y2){
//             cout<<x1<<" "<<x2<<" "<<x2<<" "<<x1;
//         }
//         else if (x2==x1){
//             cout<<y2<<" "<<y2<<" "<<y2<<" "<<x1;
//         }
//         else{
//             cout<<x1<<" "<<x2<<" "<<x2<<" "<<x2;
//         }
//     }
//     else if (x2==y2){
//         if (x1==y1){
//             cout<<x1<<" "<<x2<<" "<<x2<<" "<<x1;
//         }
//         else if (x2==x1){
//             cout<<y2<<" "<<y2<<" "<<y2<<" "<<x1;
//         }
//         else{
//             cout<<x1<<" "<<x2<<" "<<x2<<" "<<x2;
//         }
//     }
//     else{
//         cout<<x1<<" "<<x1<<" "<<y1<<" "<<y1;
//     }

// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    if(x1==x2){
        int d=abs(y1-y2);
        cout<<x1+d<<" "<<y1<<" "<<x2+d<<" "<<y2;
    }
    else if(y1==y2){
        int d=abs(x1-x2);
        cout<<x1<<" "<<y1+d<<" "<<x2<<" "<<y2+d;
    }
    else if(abs(x1-x2)==abs(y1-y2)){
        cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1;
    }
    else{
        cout<<-1;
    }
}
