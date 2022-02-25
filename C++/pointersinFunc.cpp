#include <iostream>
using namespace std;
void swap(int *a, int *b);

int main(){
    // normally when we pass int type into a function we pass it by value
    // but in cpp we have pointers to pass int types as pass by reference 
    int a = 2, b = 4;
    swap(&a,&b);
    cout<<a<<" "<<b<<endl;
    
    
    return 0;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


//  so by using pointers we can pass primitive data types by reference 
// ! chad C++;