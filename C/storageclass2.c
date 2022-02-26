#include <stdio.h>
void f1();
int main(){
    // static variable --> 
    // default --> value hoti hai 0
    // life --> tb tk rehti hai jb tk khtm na hojaye program
    // scope --> local level
//! f1();
// jb dusri baar pukara jayega function ko tou i ki value destroy nhi hui hogi!
//! f1();






    // extern variable --> 
    // default --> value hoti hai 0
    // life --> tb tk rehti hai jb tk khtm na hojaye program
    // scope --> global level


    return 0;
}

void f1(){
    static int i;
    i++;
    printf("%d\n",i);
}