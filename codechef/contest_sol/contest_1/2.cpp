#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>ans(n);
	    int sum=0;
	    for (int i=0;i<n;i++){
	        cin>>ans[i];
	        sum+=ans[i];
	    }
	    if (sum>=0){
	        cout<<0<<endl;
	    }
	    else{
	        int sum2=abs(sum);
	        cout<<(sum2+n-1)/n<<endl;;
	    }
	    
	}

}
