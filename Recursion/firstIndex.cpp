#include<iostream>
using namespace std;

int firstIndex(int arr[], int x, int s){
    if(s<0){
        return -1;
    }
    int sres=firstIndex(arr, x, s-1);
    if(sres==-1){
        if(arr[s]==x){
            return s;
        }
        else return -1;
    }else{
        return sres;
    }
}

int main(){
    int arr[]={12,1,4,2,1};
    int s=sizeof(arr)/sizeof(arr[0]);
    cout<<firstIndex(arr, 1, s);
}