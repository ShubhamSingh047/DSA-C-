#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr1[]={10,10,15};
    int arr2[]={10,10,15};
    unordered_set<int>s(arr1, arr1+3);
    // for(int i=0; i<4; i++){
    //     s.insert(arr1[i]);
    // }
    for(int j=0; j<3; j++){
        if(s.find(arr2[j])!=s.end()){
            cout<<arr1[j]<<" ";
            s.erase(arr1[j]);
        }
    }
}