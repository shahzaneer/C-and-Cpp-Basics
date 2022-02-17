#include <iostream>
using namespace std;

union pakistan{
    // union --> iske data members k darmiyan memory share hojati hai
    //  aur aik waqt main 
    // aik hi use hota hai 
int lahore;
int faislabad;
int karachi;
};
int main(){
    union pakistan p1;
    p1.faislabad = 2;
    // value faislabad ko di hai lekin show dono main hogi!
    cout<<p1.faislabad<<endl;
    cout<<p1.karachi<<endl;
    // now if we are to change the value of karachi
    p1.karachi = 5;
    // ab mehiz karachi nhi baki tamaam values overwrite hogyin hain 

    cout<<p1.faislabad<<endl;
    cout<<p1.lahore<<endl;
    cout<<p1.karachi<<endl;

    return 0;
}
