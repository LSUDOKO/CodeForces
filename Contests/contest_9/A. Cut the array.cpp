#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        vector<int> prefix(n+1, 0);
        for(int i=0;i<n;i++){
            prefix[i+1] = (prefix[i] + a[i]) % 3;
        }
        
        int found_l = 0, found_r = 0;
        
        for(int l=1;l<=n-2;l++){
            for(int r=l+1;r<=n-1;r++){
                int s1 = prefix[l] % 3;
                int s2 = (prefix[r] - prefix[l]) % 3;
                if(s2 < 0) s2 += 3;
                int s3 = (prefix[n] - prefix[r]) % 3;
                if(s3 < 0) s3 += 3;
                
                bool all_same = (s1 == s2 && s2 == s3);
                bool all_different = (s1 != s2 && s2 != s3 && s1 != s3);
                
                if(all_same || all_different){
                    found_l = l;
                    found_r = r;
                    break;
                }
            }
            if(found_l != 0) break;
        }
        
        cout << found_l << " " << found_r << endl;
    }
    return 0;
}