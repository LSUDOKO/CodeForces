#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int counta=0;
    int countb=0;
    for (auto c:s){
        if (c=='A') counta++;
        else if (c=='D') countb++;
    }
    if (counta>countb) {
        cout<<"Anton"<<endl;
    } else if (countb>counta) {
        cout<<"Danik"<<endl;
    } else {
        cout<<"Friendship"<<endl;
    }
    
}