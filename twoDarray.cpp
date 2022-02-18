#include <iostream>
using namespace std;

int main(){
    // declaration of a 2D array 
    // 2D array main size dena is necessary!

//! hard coded 2D array!
    // int matrix [3][3] = {{1,2,3},{4,5,6},{7,8,9}}; 
    // for(int i = 0; i<3;i++){
    //     for(int j = 0; j<3;j++){
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }

// ! user input
// int matrix [3][3];
// cout<<"Enter Elements!";
// for(int i = 0; i<3;i++){
//         for(int j = 0; j<3;j++){
//             cin>>matrix[i][j];
//         }
//     }


// for(int i = 0; i<3;i++){
//         for(int j = 0; j<3;j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<"\n";
//     }

// ? Searching element in a 2D array;

int matrix [3][3];
cout<<"Enter Elements!";
for(int i = 0; i<3;i++){
        for(int j = 0; j<3;j++){
            cin>>matrix[i][j];
        }
    }
int key;
cout<<"Enter the key element to find!";
cin>>key;


bool flag = false;
for(int i = 0; i<3;i++){
        for(int j = 0; j<3;j++){
            if(matrix[i][j]==key){
                flag = true;
            }
    }
}

if(flag){ 
    cout<<"The element is present in the array ";
    }
else{ 
    cout<<"The element wasn't found!";
}
}