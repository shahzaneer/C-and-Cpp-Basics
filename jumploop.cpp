#include <iostream>
using namespace std;
int main(){
    cout<<"break--> it is used to terminate a loop";
    cout<<"continue --> it is used to skip the current iteration for remaining statements after it";
    
    int pocketMoney = 3000;
    for(int date = 1; date<=30;date++){
        if(date%2==1){
            cout<<"you can go out! \n";
            cout<<date<<endl;
            pocketMoney-=300;
            if(pocketMoney==0){
                break;
            }
            else {
                continue;     
    }
    

        }
    }
}

    