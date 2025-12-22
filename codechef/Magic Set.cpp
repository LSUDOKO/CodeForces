#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    int count =0;
	    vector<int>ans(n);
	    for (int i=0;i<n;i++){
	        cin>>ans[i];
	    }
	    for (int i=0;i<n;i++){
	        if (ans[i]%m==0){
	            count++;
	        }
	    }
	    int sum=pow(2,count)-1;
	    cout<<sum<<endl;
	}

}
