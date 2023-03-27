#include <bits/stdc++.h>
using namespace std;

int main(){
int arr[]={1,1,3,4,5,6};
int n=sizeof(arr)/sizeof(arr[0]);
map<int,int>mp;
for(int i=0; i<n; i++){
    mp[arr[i]]++;
}
for(auto j=mp.begin(); j!=mp.end(); j++){
    cout<<j->first<<" : "<<j->second<<endl;
}
cout<<mp[1];
}