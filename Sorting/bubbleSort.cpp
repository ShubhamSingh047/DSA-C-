#include <bits/stdc++.h>
using namespace std;

void BubbleSortSingleLoop(int arr[], int n){
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i], arr[i+1]);
            i=-1;
        }
        
    }
}

void BubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1; j++){
            if(arr[j]> arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void OptimisedBubbleSort(int arr[],int n){
    for(int i=0; i<n-1; i++){
        bool swaped=false;
        for(int j=0; j<n-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                swaped=true;
            }
        }
        if(!swaped){
            cout<<"breaked"<<endl;
            break;
        }
    }
}

void Print(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={2,4,1,3,0};
    // int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    // BubbleSortSingleLoop(arr, n);
    // BubbleSort(arr,n);
    OptimisedBubbleSort(arr,n);
    Print(arr,n);
}