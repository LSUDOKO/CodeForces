// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int t;
// 	cin>>t;
// 	while(t--){
// 	    int n,m;
// 	    cin>>n>>m;
// 	    if (m<=n){
// 	        cout<<"YES"<<endl;
// 	    }
// 	    else if (n*3<m){
// 	        cout<<"NO"<<endl;
// 	    }
// 	    else if (m%3==0 && m/3<=n){
// 	        cout<<"YES"<<endl;
// 	    }
// 	    else {
// 	        int a=m%3;
// 	        int b=m/3;
// 	        int c=n-b;
// 	        if (c<a){
// 	            cout<<"NO"<<endl;
// 	        }
// 	        else{
// 	            cout<<"YES"<<endl;
// 	        }
// 	    }
// 	}

// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, m;
        cin >> n >> m;

        if (m < n || m > 3 * n) {
            cout << "NO"<<endl;
        }
        else if ((m - n) % 2 == 0) {
            cout << "YES"<<endl;
        }
        else {
            cout << "NO"<<endl;
        }
    }
}


