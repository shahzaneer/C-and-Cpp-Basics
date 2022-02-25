#include <iostream>
#include <conio.h>
using namespace std;

// defining a structure
struct book{
int bookID;
char title[20];
float price;

};

// a function that will return a book structure and take input
book input(){
    struct book bk;
cin>>bk.title>>bk.bookID>>bk.price;
cout<<bk.title<<bk.bookID<<bk.price;

return (bk); //is trh hum aik structure return krwaskte hain

}
void display(book){
    // will display the book
    book k;
    cout<<k.bookID<<" "<<k.price<<" "<<k.title;
}

int main(){
    book b1;
    b1 = input();
    display(b1);

    return 0;
}
