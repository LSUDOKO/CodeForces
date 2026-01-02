#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<int>freq(26,0);
    for (int i=0;i<s.size();i++){
        freq[s[i]-'a']++;
    }
    int odd=0;
    for (int f:freq){
        if (f%2!=0){
            od++;
        }
    }
    if (odd==0 || odd%2==1){
        cout<<"First"<<endl;
    }
    else{
        cout<<"Second"<<endl;
    }
}