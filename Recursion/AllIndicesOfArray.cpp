#include<iostream>
using namespace std;

int Solution(int arr[], int s, int x, int out[]){
    if(s<0)return 0;
    //as size will go below zero it eill return 0;
    int res=Solution(arr,s-1,x,out); 
    //so we will check for arr[0]==x and the push the size into out arr;
    if(arr[s]==x){
        out[res]=s;
        res++;
    }
    return res; 
}

int main(){
    int arr[]={1,2,3,1,4,9,1};
    int s=sizeof(arr)/sizeof(arr[0]);
    int out[2];
    cout<<Solution(arr,s,1,out)<<endl;
    for(auto i:out)cout<<i;
}