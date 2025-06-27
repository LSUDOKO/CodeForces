/*Data types can be broadly classified into three categories:

1 . Primary or Built-in or Fundamental data types

2. Derived data types

3. User Defined data types*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    float money = 10.50;
    // bool arpit=true;
    // cout<<arpit<<"\n";//return 1 as an answer 
    char firstLetter = 'A';
    string bookTitle = "Bhagavad Gita";  // Your favourite book name.
    /*MPORTANT
Don't confuse Character with String as both of these resemble. In C++, we use single quotes to represent characters and double quotes to represent strings. Hence,

"m", "5" and "message" are examples of strings (represented by double quotes)

'm', '5', '+' are examples of characters (represented by single quotes)*/
    int num1=10, num2=20; // num1 and num2 are initialized
    cout<<num1<<" "<<num2<<endl;// 10 20

    double pi = 3.14; // double is used for decimal numbers
    double arpit=1.254;
    cout<<fixed <<setprecision(2)<<pi+arpit<<endl;// 4.39
    
}