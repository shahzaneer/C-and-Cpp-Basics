#include <iostream>
using namespace std;

// Structure is used to group variables of different types
// we have to first define the structure then we can use it
// if we defined the structure outside any function then it is of global scope
// if defined in any function then it is of local scope
// defining structure doesn't locate memory for a function
// if we create an object of the structure only then is allocated the memory!

// !Structure ka use tou wohi hai jo aik class ka houta hai!
// !albatta class main mazeed specifications add hojatin hain.


// global scope
struct gdsccui
{
    int events;
    float members;
    char chapterGrade;
    // we have just defined the structure here so no memory is allocated!
};


int main(){
    struct gdsccui dsc; //as we made the object of Structure memory is now allocated!
    // the keyword struct is optional in cpp you may or may not use it.
    gdsccui abc; //also a way to declare structure variable!

    dsc.events = 10;
    dsc.chapterGrade = 'A';
    dsc.members = 200.0;
    // std::cout<<dsc.chapterGrade;

    cout<<(dsc.events)<<" "<<(dsc.chapterGrade)<<" "<<(dsc.members);


    // difference between an object var and normal var :
    // normal var aik hi element k liay houta hai 
    // jbkay object var aik se zyada elements k liay houta hai 
    // ! we can say that object is always a variable but just the capacity is something that is different.



}