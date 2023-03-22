#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,1,2,2,3,3,4,4,5,6,7,8};
    int n= sizeof(arr)/sizeof(arr[0]);
    map<int,int>mp;
    int count=0;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }
    for(auto i:mp)cout<<i.first<<" : "<<i.second<<endl;
    for(auto i:mp){
        if(i.second<2){
            count++;
        }
    }
    cout<<count;

    // for(auto i:mp)cout<<i.first<<" : "<<i.second<<endl;
    return count;
}