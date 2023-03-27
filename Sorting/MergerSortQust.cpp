#include <bits/stdc++.h>
using namespace std;

/*
    we are given a section of array whith low , mid and high.
    where low<=mid<high;
*/

void Solution(int arr[], int low, int mid, int high){
    int n1=mid-low+1,n2=high-mid;
    int a1[n1], a2[n2];
    
    for(int i=0; i<n1; i++){
        a1[i]=arr[low+i];
    }
    for(int j=0; j<n1; j++){
        a2[j]=arr[mid+j+1];
    }
    int i=0,j=0;
    while(i<n1 && j<n2){
        if(a1[i]<=a2[j]){
            cout<<a1[i]<<" ";
            i++;
        }else{
            cout<<a2[j]<<" ";
            j++;
        }
    }
    while(i<n1){
        cout<<a1[i]<<" ";
        i++;
    }
    while(j<n2){
        cout<<a2[j]<<" ";
        j++;
    }
}


int main(){
    int arr[]={10,20,40,20,30};
    int n=sizeof(arr)/sizeof(arr[0]);
    int low=0;
    int mid=2;
    int high=4;
    Solution(arr, low, mid, high);
}