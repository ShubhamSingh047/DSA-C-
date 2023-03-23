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

int Optimum_res(int arr[], int sum, int n){
    int current_sum=0,res=0;
    unordered_map<int, int> m;
    for(int i=0; i<n; i++){
        current_sum+=arr[i];
        if(current_sum==sum){
            res=i+1;
        }
        if(m.find(current_sum)==m.end()){
            m.insert({arr[i],i});
        }
        if(m.find(current_sum-sum)!=m.end()){
            res=max(res, i-m[current_sum-sum]);
            cout<<res;
        }
    }
    return res;
}

int main(){
    // test case1 ans should be 3
    int arr[] = {5,8,-4,-4,9,-2,2};
    int sum=0;

    //test case2
    // int arr[] = {3,1,0,1,8,2,3,6};
    // int sum=5;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<BruteForce(arr,sum,n)<<endl;
    cout<<Optimum_res(arr,sum,n)<<endl;
}