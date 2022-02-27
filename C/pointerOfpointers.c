#include <stdio.h>
int main(){
    //! extended pointers

    int a, *p,**q,***r;

    // ? calling jargons

    // a is a normal variable 
    // p is a pointer to int
    // q is a pointer to a pointer to a int
    // r is a pointer to a pointer to a pointer to a int

    
    a = 7;
    p = &a;
    q = &p;
    r = &q;
    printf("The variable a is : %d \n",a);
    printf("The address of a is p %u\n:",p);
    printf("The address of p is q %u\n",q);
    printf("The address of q is r %u\n",r);

    return 0;
}