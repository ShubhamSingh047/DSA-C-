#include <bits/stdc++.h>
using namespace std;
/*
    we have to find the pair which equlas to given res 
    arr[]={11,5,6};
    prair sum=10;
    O/P:- flase;

    arr[]={3,2,8,15,-8};
    paur sun=17;
    O/P:- true; as(3,15) sum is eaul to 17;
*/
int main(){
    int arr[]={3,2,8,5,-8};
    int expectedPairSum = 17;
    unordered_set<int> s;
    string res="false";
    for(int i=0; i<5; i++){
        if(s.find(expectedPairSum-arr[i])!=s.end()){
            res="true";
            break;
        }else{
            s.insert(arr[i]);
        }
    }
    cout<<res;
    return 0;
}