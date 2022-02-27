#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p; //a pointer through SMA
//*  malloc is used to create a memory block dynamically
//*  (jiska koi naam na ho aur koi data type bhi na ho , jisse pointers
//*  k through hi access kia jaasakay!)


    p =(int*) malloc(4);
    // malloc void pointer return krta hai isliay isse int* main convert kia hai
    *p = 27; // malloc k 4 byte walay block main mene put krdia hai 27 ko

    printf("%d \n",*p);
    printf("%d \n",p);
    return 0;
}