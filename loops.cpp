#include <iostream>
using namespace std;

int main(){
    // for loop
    // exactly same syntax like java 
    // taking sum of all the numbers from 1 to some number 
    int sum = 0;
    int n;
    cout<<"Enter number \n";
    cin>>n;

    for(int i = 0; i<=n;i++){
        sum+=i;
    }
    cout<<sum;

    // while loop 
    // same as java 
    // accepting numbers till negative number comes in
    int nu;
    cin>>nu;
    while(nu>0){
        cout<<nu<<endl;
        cin>>nu;
    }


    // do while loop
    // same as java 
    // accepting numbers till negative number comes in
    int num;
    cin>>num;
    do{
        cout<<num;
        cin>>num;
    }while(num>0);

    return 0;
}