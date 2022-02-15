#include <iostream>
using namespace std;
int d = 78; //global variable
int main(){
    int a = 15; //local variable
    float b= 2.5;
    cout<<a*b<<endl; //implicit conversion of data types
    cout<<d<<endl;
    return 0;
}