#include <bits/stdc++.h>
using namespace std;

void spiralPrint(int input[][4], int nRows, int nCols)
{
    //Write your code here
    int sc=0;
    int sr=0;
    int ec=nCols-1;
    int er=nRows-1;
    int total=nRows*nCols;
    int count=0;

    while (count < total) {
        //for printing first row from first colm to end colm
      for (int i = sc; count < total&&i <= ec; i++) {
          cout<<input[sr][i]<<" ";
          count++;
      }
      sr++;
      //for printing last  colm
      for (int j = sr; count < total && j <= er; j++) {
          cout<<input[j][ec]<<" ";
          count++;
      }
      ec--;
      //for printing las row from last colm to first colm
      for (int i = ec; count < total && i >= sc; i--) {
          cout<<input[er][i]<<" ";
          count++;
      }
      er--;
      //for printing first row bottom to top
      for (int i = er; count < total && i >= sr; i--) {
          cout<<input[i][sc]<<" ";
          count++;
      }
      sc++;
    }
}

void print(int arr[][4],int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{14,13,15,16}};
    print(arr,4,4);
}