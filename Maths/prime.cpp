#include <bits/stdc++.h>
using namespace std;
//solution to find prime number
int main(){
    int x;
    cin>>x;
    for(int i=1; i*i<x; i++){
        if(x%i==0){
            cout<<"false";
            return 0;
        }
    }
    cout<<"true";
}