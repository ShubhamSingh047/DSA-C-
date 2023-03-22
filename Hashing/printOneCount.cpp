#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,1,2,2,3,3,5,6,7,4};
    int n= sizeof(arr)/sizeof(arr[0]);
    map<int,int>mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }
    for( auto i:mp){
        if(i.second<2){
            cout<<i.first<<" ";
        }
    }
}