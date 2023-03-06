#include <bits/stdc++.h>
using namespace std;
/*
    So in an given array of size n-1 there will be 
    the rage of number present in array will be n
    for eg:- 5
    arr={1,3,2,5}
    we have to fimnd the missing number
*/

int bruteForce(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i]<arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
    int res=-1;
    for(int k=0; k<n; k++){
        if(arr[k]!=k+1){
            res=k+1;
        }
    }
    return res;
}

int optimumApproch(int arr[],int n){
    //first we will figure out sum of first n natural number;
    int sum= n*(n+1)/2;
    int res=0;
    for(int i=0; i<n; i++){
        res+=arr[i];
    }
    //we will return the sum of n natural numebers- sum of array;
    return sum-res;
}

int main(){
    int arr[]={1,3,4,5};
    // cout<<bruteForce(arr,5)<<endl;
    cout<<optimumApproch(arr,5);
}