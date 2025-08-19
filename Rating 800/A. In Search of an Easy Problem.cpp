#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool flag=false;
    vector<int> arr(n);
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=0;i<n;i++){
        if (arr[i]==1){
            flag=true;
            break;
        }
    }
    if (flag==true){
        cout<<"HARD"<<endl;
    }
    else{
        cout<<"EASY"<<endl;
    }
    
}