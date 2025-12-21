#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long n,k;
	    cin>>n>>k;
	    long long  mini=LLONG_MAX;
	    int count=0;
	    vector<long long >ans(n);
	    for (long long i=0;i<n;i++){
	        cin>>ans[i];
	    }
	    for(long long i=0;i<n;i++){
	        for (long long j=i+1;j<n;j++){
	            long long  sum=abs(ans[i]+ans[j]-k);
	            mini=min(mini,sum);
	        }
	    }
	    for(long long i=0;i<n;i++){
	        for (long long j=i+1;j<n;j++){
	            long long sum=abs(ans[i]+ans[j]-k);
	            if (sum==mini){
	                count++;
	            }
	        }
	   
	        
	    }
	    cout<<mini<<" "<<count<<endl;
	    
	}

}
