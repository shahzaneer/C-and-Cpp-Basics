#include <stdio.h>
int main(){
    int *pointer;
    pointer = (int*) calloc(5,4);
    for(int i=0;i<4;i++){
        *(pointer+i) = 10+i;
    }
    for(int i=0;i<4;i++){
        printf("%d \n",*(pointer+i));
    }
    int *pointer1;
    pointer1 = (int*) realloc(pointer,8);
    for(int i=0;i<4;i++){
        printf("%d \n",*(pointer1+i));
    }

    free(pointer);
    free(pointer1);
    return 0;
}