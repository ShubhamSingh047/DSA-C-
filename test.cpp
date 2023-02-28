#include <bits/stdc++.h>
using namespace std;
void change(int arr[],int size){
    arr[1]=0;
}
void log(int arr[], int size){
    for (int  i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int arr[]={1,1,2,2};
    change(arr,4);
    log(arr,4);


}