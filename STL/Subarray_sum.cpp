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

int main(){
    int arr[]={5,8,6,13,3,-1};
    int sum=22;
    int n= sizeof(arr)/sizeof(arr[0]);
    BruteForce(arr,n,sum);
}