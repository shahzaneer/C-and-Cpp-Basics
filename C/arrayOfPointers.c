#include <stdio.h>
int main(){
    int size = 3;

    int array [3] = {1,2,3}; //array declared

    int *pointer[size]; //array of pointers

    for(int i=0;i<3;i++){
        pointer[i] = &array[i];
    }

    for(int i=0;i<3;i++){
        printf("The value of array at index [%d] is %d \n",i,*pointer[i]);
    }
    return 0;
}