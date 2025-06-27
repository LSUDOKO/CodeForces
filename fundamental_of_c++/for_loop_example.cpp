// Using a for loop to print numbers from a to b (a and b are given by the user as inputs).
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"Number between"<<"a"<<"b"<<"are:";
    for(int i=a;i<=b;i++){
        cout<<i<<" ";
    }
}