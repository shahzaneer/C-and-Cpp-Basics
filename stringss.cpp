#include <iostream>
// we have to include string header file 
#include <string>
using namespace std;

int main(){
    // string declarations

    string s1 = "Shahzaneer Ahmed\n";
    cout<<s1;

    string s2(5,'d'); //it will print 5 d characters
    cout<<s2;
    
    // taking input from user
    string str1;
    // cin>>str1; // this will only take input in string before a space character
    // cout<<str1;

    // to get a line input a method is used
    getline(cin,str1);
    cout<<str1;

    


    
    return 0;
}