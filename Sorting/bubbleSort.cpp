#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={2,4,1,3,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=n-1; i>0; i--){
        for(int j=0; j<i; j++){
            if(arr[i]<arr[j])swap(arr[i],arr[j]);
        }
    }
    for(int i:arr)cout<<i<<" ";
}