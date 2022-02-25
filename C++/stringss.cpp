#include <iostream>
// we have to include string header file 
#include <string>
using namespace std;

int main(){
    // !string declarations

    string s1 = "Shahzaneer Ahmed\n";
    // cout<<s1;

    // string s2(5,'d'); //it will print 5 d characters
    // cout<<s2;
    
    // taking input from user
    string str1;
    // cin>>str1; // this will only take input in string before a space character
    // cout<<str1;

    // !to get a line input a method is used
    // getline(cin,str1);
    // cout<<str1;

    //! append method for concatenation (just like java)
    // we can also use + operator to append things!

    // str1 = "Shahzaneer";
    // string str2 = " Ahmed";
    // str1.append(str2);
    // cout<<str1;

    // ! some other important methods
    string a = "abc";
    string b = "zyx";
    // cout<<a.compare(b); 
    // it will print out the different in positive
    //  if a is big vicde versa with 0 as equal.
    b.clear(); // will clear it 

    string sc = "nincompoop";
    // sc.erase((3,3));
    // it means start from index 3 and remove three elements!


    // cout<<sc;
    // cout<<(sc.find("com"));
    // cout<<sc;

    sc.insert(3,"joeClark");
    cout<<sc<<endl;

    string xd = "hahahahahhahahahahahahahahaahahahahahahah";

    for(int i = 0; i<xd.length();i++){
        // yahan length is a method java main property thi yeh
        cout<<xd[i]<<endl;
    }










    
    return 0;
}