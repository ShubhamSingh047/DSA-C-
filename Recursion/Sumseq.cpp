#include<iostream>
#include<vector>
using namespace std;

bool SumSeq(int i,vector<int> &v,int arr[], int sum, int n){
    if(i==n){
        if(sum==2){
            for(int i:v) cout<<i<<" ";
            cout<<endl;
            return true;
        }
        else return false;
    }
    v.push_back(arr[i]);
    if(SumSeq(i+1,v,arr,sum+=arr[i],n))return true;
    v.pop_back();
    if(SumSeq(i+1,v,arr,sum-=arr[i],n))return true;
    else return false;
}

int main(){
    int arr[]={1,2,1};
    vector<int>v;
    SumSeq(0,v,arr,0,3);
}