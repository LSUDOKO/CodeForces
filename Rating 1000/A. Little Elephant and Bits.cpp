#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.size();
    bool remove=false;
    for (int i=0;i<n;i++){
        if (s[i]=='0'){
            s.erase(s.begin()+i);
            removed=true;
            break;
        }
    }
    if (!removed){
        s.pop_back();
    }
    int indx=0;
    while(indx<s.size() && s[indx]=='0') indx++;
    if (indx==s.size()){
        cout<<"0"<<endl;
    }
    else{
        cout<<s.substr(indx)<<endl;
    }
}