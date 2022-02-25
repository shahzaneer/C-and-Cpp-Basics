#include <iostream>
using namespace std;
string binary(int number);
int main(){
    cout<<"Enter the number to find its binary";
    int num;
    cin>>num;
    string bin = binary(num);
    cout<<"The binary of "<<num<<" is "<<bin<<endl;
}
string binary(int number){
    string reversedBinary,binary;
    int rem;
    int num=number;
    while (number!=0){
        rem = num%2;
        reversedBinary+=rem;
        num = num/2;
    }
    for(int i=reversedBinary.length()-1;i<=0;i++){
        binary+=reversedBinary[i];
    }
    return binary;

}