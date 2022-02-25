#include <stdio.h>
//? storage classes -->
// ! These are not to be confused with the OOP classes
// * variables ko jub hum declare krte hain tou kuch makhssos properties hum unke baray main deduce krte hain
// * 1  Data Type
// * 2 Variable Name
// * 3 Memory taken
// * 4 value Assigned
// yeh normal properties hain
// C main hum inke elawa bhi 4 properties rkhtay hain variables ki
// * 5 default value
// * 6 Storage (k yeh kahan load hoga)
// * 7 Scope   (kahan tk scope hai iski)
// * 8 life    (kb tk rahega yeh)
    //! int a;

    // ! in extra 4 properties ka ta'ayyun krne k liay use hotay hain storage classes C main
    // Automatic (auto) --> by default yeh houta hai
    // Register (register)
    // Static (static)
    // External (extern)

    // * variable ko declare krte huay in 4 main se koi aik keyword use krsktay hain.

    //! auto int d = 9;
    // 1 --> int
    // 2 --> d
    // 3 --> 4 bytes 
    // 4 --> 9
    // 5--> garbage
    // 6 --> RAM
    // 7 --> block level
    // 8 --> from declaration to the execution of block

    // ? ager register main krna hai load tou 
    // * but register main load kyunkar krna hai ? 

    //! register int duck = 10;
    //  baki properties same hongi bs RAM ki bajaye registers main load hoga

    //! static int dim = 11;
    //  by default value is zero.
    // ram main chalayga
    // jb tk program execute na hojaye life rahegi
    
    // ? global level scope k liay 
    // ! extern int dummy = 12;
        //  by default value is zero.
        // ram main chalega
        // scope of variable will be global


int main(){

// auto variables k scope scene
int a = 10;
printf("%d\n",a);
{
    int a = 20;
    printf("%d\n",a);
}
printf("%d\n",a);

register int d = 10;
// by doing so the speed will be enhanced much!
int sum = d++;
    d--;
    ++d-25*5;
    d*=2;

    printf("%d\n",d);

}