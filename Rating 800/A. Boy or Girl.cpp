#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    set<int>st;
    for (int i=0;i<s.size();i++){
        st.insert(s[i]);
    }
    if (st.size() % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }
    else{
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}