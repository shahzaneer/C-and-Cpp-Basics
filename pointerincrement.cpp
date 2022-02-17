#include <iostream>
using namespace std;

int main(){
    // pointer arithmetic means increment and decrement of pointers 
    // ++,--,-,+

    int a = 10;
    int *pointer;
    pointer = &a; //& ampercent symbol
    cout<<&a<<endl; // address of a
    cout<<pointer<<endl; //address of a 

    pointer++; //the increment happened in adress (the hexademical code) with respect to the data type
    // like in this case 4 bytes are incremented as int takes up 4 bytes!
    
    cout<<pointer; 



    return 0;
}