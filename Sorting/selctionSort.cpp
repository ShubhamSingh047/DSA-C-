#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={5,4,3,2,1};
    int s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<s; i++){
        int min=i;
        for(int j=i+1; j<s; j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[i],arr[min]); 
    }
    for(auto i:arr){
            cout<<i;
        }
}