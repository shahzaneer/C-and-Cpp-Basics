#include <iostream>
using namespace std;

int main(){
    int arr [] = {1,2,3,4,5};
    int *pointer;

// ! Notice that we have used arr instead of &arr[0]. 
// ! This is because both are the same.
//  ! So, the code below is the same as the code above.
// ! yani arr likho ya &arr[0] likho baaat aik hi haii !
    pointer = arr;
    pointer = &arr[0]; //it is having the address of first element of the array!
    // cout<<pointer;
    // we can also print the array from using the pointer of its elements 

    for(int i=0; i<5;i++){
        cout<<*pointer<<endl; //we will de-referenced the pointer by putting * so it will print the actual value not the address 
        
        pointer++; // incrementing the pointer to the address of next element in the array

    }

    return 0;
}



// Point to Every Array Elements
// Suppose we need to point to the fourth element of the array using the same pointer ptr.

// Here, if ptr points to the first element in the above example then ptr + 3 will point to the fourth element. For example,

// int *ptr;
// int arr[5];
// ptr = arr;

// ptr + 1 is equivalent to &arr[1];
// ptr + 2 is equivalent to &arr[2];
// ptr + 3 is equivalent to &arr[3];
// ptr + 4 is equivalent to &arr[4];

// Similarly, we can access the elements using the single pointer. For example,

 // use dereference operator
// *ptr == arr[0];
// *(ptr + 1) is equivalent to arr[1];
// *(ptr + 2) is equivalent to arr[2];
// *(ptr + 3) is equivalent to arr[3];
// *(ptr + 4) is equivalent to arr[4];


// Note: The address between ptr and ptr + 1 differs by 4 bytes.
// It is because ptr is a pointer to an int data. And,
// the size of int is 4 bytes in a 64-bit operating system.

