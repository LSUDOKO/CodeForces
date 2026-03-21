#include<bits/tsc ++.h>
using namespace std;
bool checkRXCY(string s){

    if (s[0]!='R' || !isdigit(s[1])){
        return false;
    }
    for (int i=2;i<s.size();i++){
        if (s[i]=='C'){
            return false;
        }
    }
    return true;
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        bool check=checkRXCY(s);
        if (check){
            int r=0;
            int c=0;
            int i=1;
            while(isdigit(s[i])){
                r=r*10+(s[i]-'0');
                i++;
            }
            i++;
            while(i<s.size()){
                c=c*10+(s[i]-'0');
                i++;
            }
            string colstr="";
            while(c>0){
                int rem=(c)%26;
                if (rem==0){
                    colstr+='Z';
                    c=/26-1;
                    
                }
                else{
                    colstr+=(char)('A'+rem-1);
                    c/=26;

                }
            }
            reverse(colstr.begin(),colstr.end());
            cout<<colstr<<r<<endl;
        }
        else{
            string colstr="";
            int i=0;
            while(isalpha(s[i])){
                colstr+=s[i];
                i++;

            }
            string rowstr=s.substr(i);

            long long c=0;
            for (char c:colstr){
                c=c*26+(ch-'A'+1);

            }
            cout<<"R"<<rowstr<<"C"<<c<<endl;
        }
    } 
    
}
