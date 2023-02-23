#include<bits/stdc++.h>
using namespace std;

void recoverArr(int in[],int out[], int size){
    int i,left, right;
    int mid = size/2;
    i=0;
    if(size%2!=0){
        out[mid]=in[i];
        left=mid-1;
        right=mid+1;
        i++;
    }else{
        left=mid-1;
        right=mid;
    }
    while(i<size){
        out[left]=in[i];
        left--;
        i++;
        out[right]=in[i];
        right++;
        i++;
    }
}

int main(){
    int n;
    cin>>n;
    int in_arr[]={3,2,4,1,5};
    int ot_arr[5];
    recoverArr(in_arr,ot_arr,n); 
    for(auto i:ot_arr)cout<<i<<" ";   
} // namespace name
