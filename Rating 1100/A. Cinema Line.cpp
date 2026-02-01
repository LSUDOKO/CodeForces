#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>ans(n);
    bool check=true;
    for (int i=0;i<n;i++){
        cin>>ans[i];
    }
    int note25=0;
    int note50=0;
    for (int i=0;i<n;i++){
        if (ans[i]==25){
            note25++;
        }
        else if (ans[i]==50){
            if (note25>0){
                note25--;
                note50++;
            }
            else{
                cout<<"NO";
                return 0;
            }

        }
        else {
            if (note50>0 && note25>0){
                note50--;
                note25--;
            }
            else if (note25>=3){
                note25=note25-3;
            }
            else{
                cout<<"NO";
                return 0;

            }
        }
    }
    cout<<"YES";
}