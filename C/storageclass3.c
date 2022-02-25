#include <stdio.h>

int x = 10; //global variable

void sum(){
    extern int x; //extern keyword k saath function ko yeh pta chalta hai k yeh jo variable hai
    // yeh global wala hai 
    x++;
    printf("%d\n",x);
}
int main(){


sum();
    


    return 0;
}