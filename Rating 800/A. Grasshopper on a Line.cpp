    #include<iostream>
    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        int t;
        cin>>t;
        while(t--){
            int x,k;
            cin>>x>>k;
            if (k>x){
                cout<<1<<endl;
                cout<<x<<endl;
            }
            else{
                if(x%k!=0){
                    cout<<1<<endl;
                    cout<<x<<endl;
                }
                else{
                    cout<<2<<endl;
                    cout<<1<<" "<<x-1<<endl;
                }
            }
        }
    }