#include<bits/stdc++.h>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
            long long n;
            cin>>n;
            if (n%2!=0 || n<=3){
                cout<<-1<<endl;
                continue;
            }
            long long max_bus=0;
            long long  min_bus=0;

            //mininum buses
            if (n%6==0){
                cout<<n/6<<" ";
            }
            else if (n%6!=0 || n%4==0){
                cout<<n/4<<" ";
            }

            //maxinum buses
            if (n%4==0){
                cout<<n/4<<" ";
            }
            else if (n%4!=0 || n%6==0){
                cout<<n/6<<" ";
            }
            cout<<endl;
        }
}