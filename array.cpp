#include <iostream>
#include <climits>
using namespace std;

int main(){
    // array declaration in cpp
    // datatype arrayname[size]
    int array [] = {1,2,3,4,5}; //size dena ya na dena is optional
    int array1 [5] = {1,2,3,4,5}; //size ghalat bhi deden tou error throw nhi hoga!
    //  there is no new keyword in cpp for initializing array :)
    int array[1] = INT_MAX; 



    cout<<array[4]<<endl;
    // cout<<array1[1];

}