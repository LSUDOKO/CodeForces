    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        long long n;
        cin>>n;
        long long count=1;
        vector<string> arr(n);
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        for (int i=1;i<n;i++){
            if (arr[i]!=arr[i-1]){
                count++;
            }
        }
        cout<<count;
    }