#include <iostream>
using namespace std;
int sum(int,int); //function prototype --> isko hamesha uper declare krte hain!
// ager function uper hi banaye jayen tou isko declare krne 
// ki koi zarurat nhi hai!


main(){
int a = 6,b = 6;
int sumv = sum(a,b);
cout<<sumv;
}

int sum(int a,int b ){
    int s = a + b;
    return s;
}