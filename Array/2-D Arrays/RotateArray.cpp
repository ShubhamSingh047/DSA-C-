#include <bits/stdc++.h>
using namespace std;

/*
    efficient way to reverse array using 
    1)transpose
    2)reverse tranposed array!

*/

void Reverse(int arr[][4]){
    //for anticlockwise rotation

    for(int i=0; i<2; i++){
        for(int j=0; j<4; j++){
            swap(arr[i][j], arr[4-i-1][j]);
        }
    }

    //for clockwise roatation
    // for(int i=0; i<4; i++){
    //     for(int j=0; j<2; j++){
    //         swap(arr[i][j],arr[i][4-j-1]);
    //     }
    // }
}

void Transpose(int arr[][4]){
    for (int i=0; i<4; i++){
        for(int j=i+1; j<4; j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
}

void Print(int arr[][4]){
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    Transpose(arr);
    Reverse(arr);
    Print(arr);
}