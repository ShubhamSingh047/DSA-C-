#include <bits/stdc++.h>
using namespace std;

void BruteForce(int arr[],int n,int x){
    for(int i=0; i<n; i++){
        int curr_sum=0;
        for(int j=i; j<n; j++){
            curr_sum+=arr[j];
            if(curr_sum==x){
                cout<<"true"<<endl;
                return;
            }
        }
    }
    cout<<"false"<<" ";
    return;
}

void OptimumApproch(int arr[], int n, int x){
    unordered_set<int>s;
    int cuur_sum=0;
    for(int i=0; i<n; i++){
        cuur_sum+=arr[i];
        //test case -4,2,2,1,2 here -2 & 2 could have made a zero;
        if(s.find(cuur_sum-x)!=s.end()){ 
            cout<<"true";
            return;
        }
        if(cuur_sum==x){
            cout<<"true"<<" ";
            return;
        }
        s.insert(cuur_sum);
    }
    cout<<"false"<<endl;
    return;
}

int main(){
    int arr[]={5,8,6,13,3,-1};
    int sum=22;
    int n= sizeof(arr)/sizeof(arr[0]);
    BruteForce(arr,n,sum);
    OptimumApproch(arr,n,sum);
}