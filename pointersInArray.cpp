#include <iostream>
using namespace std;

int main(){
    int arr [] = {1,2,3,4,5};
    int *pointer;
    pointer = arr; //it is having the address of first element of the array!
    // cout<<pointer;
    // we can also print the array from using the pointer of its elements 

    for(int i=0; i<5;i++){
        cout<<*pointer<<endl; //we will de-referenced the pointer by putting * so it will print the actual value not the address 
        
        pointer++; // incrementing the pointer to the address of next element in the array

    }

    return 0;
}