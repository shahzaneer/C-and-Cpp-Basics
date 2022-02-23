#include <iostream>
using namespace std;

// function definition to swap values
void swap(int &n1, int &n2) {
    // func defi main hi hmne uska address lelia hai yani hmain address dena hai arguments main 
    // call krte huay !

    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

int main()
{

    // initialize variables
    int a = 1, b = 2;

    cout << "Before swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // call function to swap numbers
    // function call krte huay values deni nhi hain direct & symbol ka use nhi krna yahan!
    
    swap(a,b);

    cout << "\nAfter swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}