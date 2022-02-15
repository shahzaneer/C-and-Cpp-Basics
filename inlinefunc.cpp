#include <iostream>
using namespace std;
inline int sum(int a, int b)
{
    return a+b;
}
// inline keyword control transfer krne ki bajaye inline function ka 
// code paste krdeta hai use hone wali jageh per jisse execution tezz hoti hai


int main(){
    int a= 9;
    int b = 8;
    cout<<sum(a,b); 
}