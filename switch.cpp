#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<<"enter a char from a,b,c,d \n";
    cin>>ch;
    // all concepts are same like java 
    switch (ch)
    {
    case 'a': {
        // use block braces for more lines in a case statement
        cout<<"Salaam";
        cout<<"this is in urdu";
    }
        break;

    case 'b':
        cout<<"hello";
        break;
    case 'c':
        cout<<"ciao";
        break;
    case 'd':
        cout<<"khushamdeed";
        break;
    
    default:
        cout<<"im still learning languages";
        break;
    }

    return 0;
}