#include <bits/stdc++.h>
using namespace std;
/*
    * * * *
    *   *
    * *
    * 
*/

int main(){
    int n;
    cin>>n;
    for(int i=n; i>0; i--){
        for(int j=i; j>0;j--){
            if(j==1||j==i||i==n){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}