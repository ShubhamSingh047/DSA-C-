#include <bits/stdc++.h>
using namespace std;
/*
 count the number of distinct element from both the element !
*/
int main(){
    int arr1[]={1,2,3,4,5,1};
    int arr2[]={1,2,3,6};

    unordered_set<int>s;

    for(int i=0; i<5; i++){
        s.insert(arr1[i]);
    }
    for(int j=0; j<4; j++){
        s.insert(arr2[j]);
    }
    cout<<s.size();

}