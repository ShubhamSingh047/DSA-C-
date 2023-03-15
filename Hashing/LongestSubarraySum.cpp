#include <bits/stdc++.h>
using namespace std;
/*
    we have to figure out longest subarray with sum zero;
*/

int BruteForce(int arr[], int sum, int n){
    int res=0;
    for(int i=0; i<n; i++){
        int count=0;
        int flag=false;
        int curr_sum=0;
        for(int j=i; j<n; j++){
            curr_sum+=arr[j];
            count++;
            if(curr_sum==sum){
                flag=true;
                break;
            }
        }
        if(count>=res && flag==true){
            res=count;
        }
    }
    return res;
}

int main(){
    // test case1
    // int arr[] = {5,8,-4,-4,9,-2,2};
    // int sum=0;

    //test case2
    int arr[] = {3,1,0,1,8,2,3,6};
    int sum=5;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<BruteForce(arr,sum,n);
}