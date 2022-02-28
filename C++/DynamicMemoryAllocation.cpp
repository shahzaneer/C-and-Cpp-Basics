#include <iostream>
using namespace std;
int main(){
    // ismay bhi dynamic memory allocation ka concept same C wala hai 
    // alatta syntax change hai
    // here new and delete keywords are used instead of malloc() calloc() realloc() and free()
    // ! catch --> as cpp is a supersubset of C yahan bhi malloc calloc function use hoskte hain
    // but jb new aur delete keyword aagye hain jo qadray easy hain tou aisa krna bayjaa hoga!
    int *pointer = new int; 
    //* aik pointer point kr rha hai aik int ko jiska koi name nhi hai jo DMA k through banaya gya hai 
    *pointer = 29;
    cout<<(*pointer)<<endl;
    // cout<<pointer;

    delete pointer; //yeh dma wala int destory hogya 
    cout<<(*pointer)<<endl;  // now it contain some garbage values!


    // array bhi declare hoskti hai yun 

    int *pointer2 = new int [10];
    for(int i=0;i<10;i++){
        *(pointer2+i) = 10+i;
    }

    for(int i=0;i<10;i++){
        cout<<*(pointer2+i)<<endl;
    }

    
    delete []pointer2;  //syntax to delete the array through DMA

    return 0;
}