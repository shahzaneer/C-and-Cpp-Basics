#include <iostream>
using namespace std;

// class Syntax 

class Abc{
    public:
    string name;
    int age;
// by default private hotay hain variable/data-members.

    void printInfo(){
        cout<<name<<endl;
        cout<<age<<endl;
    }

    Abc(){}

    ~Abc(){
        cout<<"Destructor Called"<<endl;
    }

    Abc(Abc &a){
        age = a.age;
        name = a.name;

    }
    
}; //This semi colon is necessary!

int main(){

    Abc shah; // Object Creation for class
    shah.name = "Shahzaneer Ahmed";
    shah.age = 19;

    shah.printInfo();

    Abc fatima;
    fatima.name = "Fatima Mahsud";
    fatima.age = 21;

    fatima.printInfo();

    Abc Noor;
    Noor = fatima; //Deep copy
    Noor.printInfo();

    // same concepts of default and parametrised constructors in cpp as of java
    // there is also a destructor that is invoked when an object is destroyed.

    return 0;
}