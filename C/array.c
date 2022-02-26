#include <stdio.h>
int main(){
    // int a[10];
    // for(int i=0;i<10;i++){
    //     printf("%d\n",a[i]);
        // array with garbage values!


        //! int twoD [2][2] = {{1,2},{3,4}};
        //* these inner braces are optional in C.
        //? the program will automatically fetch their order from declaration.
        int twoD [2][2]  = {1,2,3,4};


        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                printf("%d\t",twoD[i][j]);
            }
            printf("\n");
        

    }
    return 0;
}