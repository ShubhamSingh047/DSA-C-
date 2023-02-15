#include<bits/stdc++.h>
using namespace std;

vector<int> Solution(int i, vector<int> v, int arr[], int n, int s){
    if(i==n){
        vector<int> base;
        base.push_back(-1);
        return base;
    }

    int first = arr[i];
    vector<int> rns = Solution(i+1,v,arr,n,s);
    for(int i=0; i<rns.size(); i++){
        if(arr[i]+first==s){
                v.push_back(arr[i]);
                v.push_back(first);
        }
    }
    return v;
    }

int main(){
    int arr[]={1,2,1};
    vector<int> v;
    vector<int> res =Solution(0,v,arr,3,2);
    cout<<res.size();
    for(int i:res){
        cout<<i;
    }
    return 0;
}