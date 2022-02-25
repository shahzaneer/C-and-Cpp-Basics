// Pointer is a variable in C++ that 
// holds the address of another variable. 
// They have data type just like variables,
// for example an integer type pointer can 
// hold the address of an integer variable and an 
// character type pointer can hold the address of char variable.

#include <iostream>
using namespace std;

main(){
    int a = 10;
    // pointer variable bananay k liay hamain variable name se pehle * lgana hota hai 
    // aur us variable ko uska address dene k liay & symbol use krna houta hai

    int *p; //pointer variable
    p = &a; //that pointer varaible is assigned the address of a!
    *p = 20; //by doing so we changed the value of a to be 20 as the pointer will now store the address of 20!
    cout<<"address of a is "<<p<<endl;
    cout<<"value of a is  "<<*p;
// we can also store the address of another pointer in a pointer because a pointer is itself a
// variable
//! pointer variable ko kisi bhi data type k address ko store krne k liay srff 2 bytes chahiay hotay hain.
// ! per isko same data type ka is liay declare krte hain q k jb hum derefrencing krte hain tou hum isse use kr sakain!





int *d;
d =p;
cout<<"The address of pointer p is "<<d;
}