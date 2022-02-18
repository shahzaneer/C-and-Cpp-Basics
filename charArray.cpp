#include <iostream>
using namespace std;

int main(){
    // character is a primitive data type while 
    // strings are the reference data types
    // we can use character array for string as well

    char name[100] = "Shahzaneer Ahmed";
    // [size] dena hai ager zyada de dengay tb bhi chalayga 
    // but usmay garbage values store hongi!
    // isko print krne per yeh line print hoti hai

    // Shahzaneer Ahmed╛☺►l☺▒‼¢ò÷⌂∟hp¢ò÷⌂µ¶¢ò÷⌂4p"┬²⌂Q&╛┬²⌂0√  Φ♦0√  ╨♦↓
    // int i = 0;
    // while(i!='/0'){
    //     cout<<name[i];
    //     i++;
    // }


    // char naam [11] = "Shahzaneer"; //shahzaneer main 10 words hain lekin char array main hum size +1 dete hain 
    // last character by default aik null character houta hai --> '/0'
    // for(int i = 0; i<11;i++){
    //     cout<<naam[i];
    // }

    // size pura pura rakhain tou error aayega!
    // char naam [10] = "Shahzaneer";
    // for(int i = 0; i<10;i++){
    //     cout<<naam[i];
// }

    char naam [11] = "Shahzaneer";
    

    cout<<naam; //? cpp is helping printing things without looping in case of char array only!
    
    // char zarb [3] = "Zarb e Kamleem"; //kam nhi desktay size !
    // cout<<zarb;
    
}