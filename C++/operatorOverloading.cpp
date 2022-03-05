#include <iostream>
using namespace std;
// Operator Overloading --> special feature of cpp jo k java ki oops main nhi milta
// yeh apko kisi operator se koi makhsoos kaam lene ki ijazat dena hai jo k wo amooman nhi krta..


// will update it soon.. 
class Abc{
    public:
        int age;
        string name;
    void display(){
        cout<<name<<endl;
        cout<<age<<endl;
    }

    Abc operator +(Abc &obj){
        age = obj.age-2;

    }

};
int main(){

    Abc shah;
    shah.name = "Shahzaneer Ahmed";
    shah.age = 19;

    



return 0;
}