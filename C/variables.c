#include <stdio.h>

int main(){
    // Integer main hum hexadecimal , octal aur decimal values deskte hain 
    // hexadecimal k liay 0x ya 0X prefix hoga, ocal k liay 0 aur decimal k liay kuch nhi hoga 
    
    int a = 0987; //variables.c:5:13: error: invalid digit "9" in octal constant
    printf(a);
}