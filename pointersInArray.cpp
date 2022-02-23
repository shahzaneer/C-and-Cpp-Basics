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