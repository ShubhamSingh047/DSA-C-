#include <bits/stdc++.h>
using namespace std;

/*
    for sum of sub array is zero the return else false;
*/

bool bruteforce(int arr[],int n){
    for(int i=0; i<n; i++){
        int currSum=0;
        for(int j=i; j<n; j++){
            currSum+=arr[j];
            if (currSum==0){
                return true;
            }
        }
    }
    return false;
}

bool optimumApproch(int arr[], int n){
    unordered_set<int>s;
    int pre_sum=0;
    for(int i=0; i<n; i++){
        pre_sum+=arr[i]
        if(s.find(pre_sum)!=s.end()){
            return true;
        }
        if(pre_sum==0){
            return true;
        }
        s.insert(pre_sum);
    }
    return false;
}

int main(){
    int arr[]={-3,2,1,4};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<bruteforce(arr,n);
    optimumApproch(arr,n);
}