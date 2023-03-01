#include <bits/stdc++.h>
using namespace std;

//unsolved

int** Solution(int arr[][3]){
    int **arr2= new int*[3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            arr[i][j]=arr[j][i];
        }
    }
    return arr2;
}

void print(int **res){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<res[i][j];
        }
    }
}

int main(){
    int arr[][3]={{1,2,3},{4,5,6},{7,8,9}};
    int** res=Solution(arr);
    print(res);
}