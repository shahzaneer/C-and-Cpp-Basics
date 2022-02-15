#include <iostream>
using namespace std;

main(){
int a = 10; // normal variable
int *p;   // ? pointer variable
p = &a;  
int &v= a; //! this is reference variable 
// it is storing the reference of a that is adrees of a!
// ab jbke hum v ko change karengay tou change a main dhikhayee dega!

v++;
cout<<a;
// a is 11 now as we incremented 'v' which was the reference variable!
}