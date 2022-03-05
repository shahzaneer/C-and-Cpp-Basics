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

    return 0;
}