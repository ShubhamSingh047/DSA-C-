#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    //Precomputaion
    map<int, int>mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }

    //printing
    for(auto it:mp){
        cout<<it.first<<"->"<<it.second<<endl;
    }

    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
    }

    cout<<"End of code"<<endl;
}