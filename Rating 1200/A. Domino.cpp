#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sumx=0;
    int sumy=0;
    bool flip=false;
    while(n--){
        int x,y;
        cin>>x>>y;
        sumx+=x;
        sumy+=y;
        if (x%2!=y%2){
            flip=true;
        }
    }
    if (sumx%2==0 && sumy%2==0){
        cout<<0<<endl;
    }
    else if (sumx%2!=0 && sumy%2!=0 && flip){
        cout<<1<<endl;
    }
    else {
        cout<<-1<<endl;
    }

}