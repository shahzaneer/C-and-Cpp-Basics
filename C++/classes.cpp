#include <iostream>
// #include <conio.h> 
using namespace std;
// it is used for console input and output
//  structure aur class main srff access specifiers ka farq hai iske elawa koi farq nhi hai 
// jo kaam sturcture main hoskta hai wo class main bhi hoskta hai


// structure basically c ka concept hai isko isliay banaya gya tha k cpp ko c ki trh bhi use kia jasakay!

class complex{
    // private: k bad jo bhi cheez declare karengay wo private hogi and so on...
// class k ander bnne walay function by default inline houtay hain aur bahir walay normal houtay hain
private:
    int a,b;    
public:
    void set_data(int x, int y){
        a=x; b=y;
    }
    void show_data(){
        cout<<"\n"<<a<<" "<<b;
    }
    void shahzaneerAhmed(); //declared the prototype


// we can also define a function outside the class but we have to declare the 
// prototype of that function in the same class!

};


// ab class se bahir jaker will define the function
// lekin isko link krne k liay return type aur name k darmiyan membership operator lgana hoga
// classname ::
void complex:: shahzaneerAhmed(){
        cout<<"\nPakistan noor hai aur noor ko zawaal nhi!";
    }
int main(){
    complex c1;
    // c1 aik object hai simple variable nhi 
    // (same object class ka concept jo ap pichle 1 saal se parh rhay hain)

    c1.set_data(3,4);
    c1.show_data();
    c1.shahzaneerAhmed();

    return 0;
}