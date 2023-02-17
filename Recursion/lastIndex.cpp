#include<iostream>
using namespace std;

int lastIndex(int arr[], int s, int x){
    if(s<0)return -1;
    if(arr[s]==x){
        return s;
    }
    return lastIndex(arr, s-1, x);
}

int main(){
    int arr[]={1,2,3,4,1};
    int s= sizeof(arr)/sizeof(int);
    cout<<lastIndex(arr,s,1);
}