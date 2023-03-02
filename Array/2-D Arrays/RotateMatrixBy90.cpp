#include <bits/stdc++.h>
using namespace std;
//rotate array anti clock wise using new array!
void print(int arr[][4],int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void Rotate(int  arr[][4]){
    int arr2[4][4]={{0}};
    int n=4;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            arr2[i][j]=arr[j][n-i-1];
        }
    }
    print(arr2,4,4);
}

int main(){
    int arr[][4]={{1,2,3,4},{5,6,7,8},{9,0,1,2},{10,11,12,13}};
    Rotate(arr);
}