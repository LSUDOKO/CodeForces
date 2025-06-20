#include<iostream>
#include<bits/stdc++.h>


using namespace std;
int main(){
    string a,b,c;
    cin>>a>>b;
    for (int i=0;i<a.size();i++){
        if (int(tolower(a[i]))>int(tolower(b[i]))){
            cout<<1<<endl;
            break;
        }
        else if (int(tolower(a[i]))<int(tolower(b[i]))){
            cout<<-1<<endl;
            break;
        }
        else{
            c+=tolower(a[i]);
        }

    }
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    if (c==a){
        cout<<0<<endl;
    }
    return 0;

}