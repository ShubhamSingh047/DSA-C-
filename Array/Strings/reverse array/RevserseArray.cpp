#include<iostream>
using namespace std;

void reverse(int arr[]){
    int n=0;
    for(auto i:arr){
        n++;
    }
    int i=0;
    while(i<n){
        swap(arr[i],arr[n-i-1]);
        i++;
    }
}

int main(){
    int arr[10]={1,2,3,4,5,6,7,0,8,9};
    reverse(arr);
    for(auto i:arr)cout<<i;
}