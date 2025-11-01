#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k,a,b,x,y;
        cin>>k>>a>>b>>x>>y;
        int count=0;
        if (a<=b && x<=y){
            while(a<=k){
                k=k-x;
                count++;
            }
        }
        else if (a>b && x>y){
            while(b<=k){
                k=k-y;
                count++;
            }
        }
        else{
            if (a>b){
                while(k<=a){
                    k=k-x;
                    count++;
                }
                while(k<=b){
                    k=k-y;
                    count++;
                }
            }
            else if (a==b){
                if (x<=y){
                    while(k>=a){
                        k=k-x;
                        count++;
                    }
                }
                else{
                    while(k>=b){
                        k=k-y;
                        count++;
                    }
                }
            }
            else{
                while(k>=b){
                    k=k-y;
                    count++;
                }
                while(k>=a){
                    k=k-x;
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
}