#include <bits/stdc++.h>
using namespace std;

void Solution(int arr[][4], int n){
    for(int i=0; i<n/2; i++){
        for(int j=0; j<n/2; j++){
            swap(arr[j][i],arr[i][j]);
        }
    }
}

void print(int arr[][4], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    cout<<"before traversing "<<endl;
    print(arr, 4);
    Solution(arr, 4);
    cout<<"after traversing "<<endl;
    print(arr, 4);
}