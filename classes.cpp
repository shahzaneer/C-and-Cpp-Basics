#include <iostream>
// #include <conio.h> 
using namespace std;
// it is used for console input and output
//  structure aur class main srff access specifiers ka farq hai iske elawa koi farq nhi hai 
// jo kaam sturcture main hoskta hai wo class main bhi hoskta hai


// structure basically c ka concept hai isko isliay banaya gya tha k cpp ko c ki trh bhi use kia jasakay!

class complex{
    // private: k bad jo bhi cheez declare karengay wo private hogi and so on...

private:
    int a,b;    
public:
    void set_data(int x, int y){
        a=x; b=y;
    }
    void show_data(){
        cout<<"\n"<<a<<" "<<b;
    }

};
int main(){
    complex c1;
    c1.set_data(3,4);
    c1.show_data();

    return 0;
}