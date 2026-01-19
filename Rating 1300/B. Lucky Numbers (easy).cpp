#include<bits/stdc++.h>
using namespace std;

vector<long long>luck;
void generated(long long curr,int count4,int count7){
    if (count4+count7>10){
        return ;
    }
    if (count4>0 && count4==count7){
        luck.push_back(curr);
    }
    generated(curr*10+4,count4+1,count7);
    generated(curr*10+7,count4,count7+1);

}
int main()   {
    long long  n;
    cin>>n;
    generated(0,0,0);
    sort(luck.begin(),luck.end());
    for (long long val:luck){
        if (val>=n){
            cout<<val<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}