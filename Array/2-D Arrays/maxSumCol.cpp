#include <bits/stdc++.h>
using namespace std;
/*
**IMP
    for the give matrix we need to find the sum of max colm
    for eg :- arr[][3]={{1,2,3},{4,4,6},{0,50,0}}
    sum of 1st colm = 5;
    sum of 2nd colm = 56;
    sum of 3rd colm = 9;
    so we should get 1;
    sol:-
    we will add arr[col][row];
    and we will print [row] bcz the index row will only increase when we
    are done with col !
*/
void Solution(int arr[][3]){
    int currentSum=0;
    int maxSum=0;
    int col=-1;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            currentSum+=arr[j][i];
        }
        if(maxSum<currentSum){
            maxSum+=currentSum;
            currentSum=0;
            col=i;
        }
    }
    cout<<col<<endl;
}

int main(){
    int arr[][3]={{1,2,3},{4,4,6},{0,50,0}};
    Solution(arr);
}