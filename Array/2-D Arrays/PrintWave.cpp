#include <bits/stdc++.h>
using namespace std;

void PrintWave(int arr[][4]){
    for(int i=0; i<3; i++){
        if(i&2){
            for(int j=3; j>=0; j--){
                cout<<arr[i][j]<<" ";
            }
        }else{
            for(int j=0; j<4; j++){
             cout<<arr[i][j]<<" ";   
            }
        }
    }
}
//completed the only trick to be used is to print top to bottom for 
//odd element and bottom to top for even.
int main(){
    int arr[][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    PrintWave(arr);
}