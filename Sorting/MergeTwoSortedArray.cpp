#include <bits/stdc++.h>
using namespace std;
//steps to do merge short

void MergeSort(int arr1[], int arr2[], int n1, int n2){
    int i=0, j=0;
    while(i<n1 && j<n2){
        if(arr1[i]<=arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
        }else{
            cout<<arr2[j]<<" ";
            j++;
        }
    }
    while(i<n1){
        cout<<arr1[i]<<" ";
        i++;
    }
    while(j<n2){
        cout<<arr2[j]<<" ";
        j++;
    }
}

int main(){
    int arr1[]={10,20,30,40};
    int arr2[]={1,1,2};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    MergeSort(arr1,arr2,n1,n2);
}