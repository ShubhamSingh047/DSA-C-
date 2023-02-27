#include <bits/stdc++.h>
using namespace std;
/*
    the array should be in increasing order
    with respect to row and colum
    eg:-
    1 2 3 4
    4 7 8 10
    6 12 16 20 
    8 14 22 25

    in above array the element at next row is greater then last row 
    element & same for colomn. 
*/
void Solution(int arr[][100], int row, int col, int x){
    int i=0;
    int j=col-1;
    while(i<row && j>=0){
        if(arr[i][j]==x){
            cout<<"on row "<<i<<endl;
            cout<<"on col "<<j<<endl;
            return;
        }else if(x>arr[i][j]){
            i++;
        }else{
            j--;
        }
    }
    cout<<-1<<endl;
}

void print(int arr[][100],int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void input(int arr[][100],int row,int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<"for row and for col "<<i<<" "<<j<<" "<<endl;
            cin>>arr[i][j];
        }
    }
}

int main(){
    int row,col;
    cout<<"enter value of row & col"<<endl;
    cin>>row>>col;
    int arr[100][100];
    input(arr,row,col);
    print(arr,row,col);
    cout<<"enter the number you want to serch"<<endl;
    int x;
    cin>>x;
    Solution(arr,row,col,x);
}