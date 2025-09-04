// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int>arr(n);
//     for (int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     sort(arr.rbegin(), arr.rend());
//     int sum1=0;
//     int sum2=0;
//     for (int i=n-1;i>=0;i=i-2){
//         sum1+=arr[i];
//     }
//     for (int i=n-2;i>=0;i=i-2){
//         sum2+=arr[i];
//     }
//     cout<<sum1<<" "<<sum2;
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++) cin >> arr[i];

//     sort(arr.rbegin(), arr.rend());

//     long long sum1 = 0, sum2 = 0;
//     for (int i = 0; i < n; i++) {
//         if (i % 2 == 0) sum1 += arr[i];
//         else sum2 += arr[i];
//     }

//     cout << sum1 << " " << sum2 << endl;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    int l = 0, r = n - 1;
    int turn = 0; 
    int sereja = 0, dima = 0;

    while (l <= r) {
        if (arr[l] > arr[r]) {
            if (turn == 0) sereja += arr[l];
            else dima += arr[l];
            l++;
        } else {
            if (turn == 0) sereja += arr[r];
            else dima += arr[r];
            r--;
        }
        turn = 1 - turn; 
    }

    cout << sereja << " " << dima << endl;
    return 0;
}
