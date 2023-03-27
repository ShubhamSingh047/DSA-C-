#include <bits/stdc++.h>
using namespace std;

vector<char> printPattern(int N) {
        // code here
        vector<char> ch();
        for(int i=0; i<N; i++){
            for(int j=0; j<i+1; j++){
                push_back('*');
            }
            push_back(' ');
        }
    }

int main(){
    printPattern(3);
    // int n;
    // cin>>n;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<i+1; j++){
    //         cout<<"*";
    //     }
    //     cout<<" ";
    // }
}