#include <bits/stdc++.h>
using namespace std;

void Solution(int arr[][3]){
    int sum=0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            // sum+=arr[j][i]; to find the sum for colm
             sum+=arr[i][j]; //to find the sum for row
        }
        cout<<sum<<endl;
        sum=0;
    }
}

int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    Solution(arr);
}