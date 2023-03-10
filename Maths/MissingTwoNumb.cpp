#include <bits/stdc++.h>
using namespace std;
/*
the element present in array are of size lest then or equal to n;
and size of arr is n-2;
*/

void bruteforce(int arr[], int n){
    int arr2[6]{0};
    int i,j;
    for(i=0; i<n; i++){
        arr2[arr[i]]=1;
    }
    int s = sizeof(arr2)/sizeof(arr2[0]);
    for(j=1; j<s; j++){
        if(arr2[j]!=1){
            cout<<j<<" ";
        }
    }
}

int main(){
    int arr[]={1,4,5};
    bruteforce(arr,3);
}