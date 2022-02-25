#include <iostream>
using namespace std;
// the functions are always declared above the main method 
// otherwise you'll face error
int summation(int a,int b); //declaring function
int main(){
    int a = 20;
    int b = 40;
    int func = summation(a,b);
    cout<<"the sum is ";
    cout<<func;
    return 0;
}

// returnType funcName(paramters list){ code} 
// same as java almost
int summation(int a, int b){
    return a+b;
}