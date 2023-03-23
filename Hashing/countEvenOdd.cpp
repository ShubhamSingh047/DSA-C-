#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,1,1,2,2};
    int n= sizeof(arr)/sizeof(arr[0]);
    int odd=0,even=0;
    unordered_map<int,int>mp;
    for(int i=0; i<n; i++)mp[arr[i]]++;
    for(auto i =mp.begin(); i!=mp.end(); i++){
        cout<<i->first<<" "<<i->second<<endl;
    }
    cout<<even<<" "<<odd<<endl;
}