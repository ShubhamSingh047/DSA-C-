#include <bits/stdc++.h>
using namespace std;

int Solution(int arr[], int n){
    unordered_set<int>s;
    for(int i=0; i<n; i++){
        s.insert(arr[i]);
    }
    return s.size();
}

int Optimised(int arr[], int n){
    //this below line will iterate for all the unique value
    //in arr and add it to set;
    unordered_set<int>k(arr, arr+n);
    return k.size();
}

int main(){
    int arr[]={10,20,10,30,40};
    cout<<Solution(arr,5);
}