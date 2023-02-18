#include<iostream>
using namespace std;

int Solution(int arr[], int s, int x, int out[]){
    if(s==0)return 0;
    int res=(arr,s-1,x,out);
    if(arr[s]==x){
        out[res]=s;
        res++;
        return res;
    }else return res;
}

int main(){
    int arr[]={1,2,3,1,4,9};
    int s=sizeof(arr)/sizeof(arr[0]);
    int out[2];
    Solution(arr,s,1,out);
}