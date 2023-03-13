#include <bits/stdc++.h>
using namespace std;

/*
    for sum of sub array is zero the return else false;
*/

bool bruteforce(int arr[],int n){
    for(int i=0; i<n; i++){
        int currSum=0;
        for(int j=i; j<n; j++){
            currSum+=arr[j];
            if (currSum==0){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int arr[]={-3,2,1,4};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<bruteforce(arr,n);

}