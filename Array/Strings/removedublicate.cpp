#include<bits/stdc++.h>
using namespace std;

int main(){
    //find the dublicate in array where i the range of the array is from 0-to-(n-2);
    int n=5;
    int arr[]={0,1,2,3,1};
    int sum_arr=0;
    //this is where we find the actual sum of number and subtract from array sum thus
    //number are rangin from n-2 there will be extra number that will be removed;
    int sum_expected=(n-2)*(n-1)/2; 
    for(int i=0; i<5; i++){
        sum_arr+=arr[i];
    }
    cout<<sum_arr - sum_expected<<endl;
}