#include<iostream>
using namespace std;

int Solution(int m, int n){
    if(m==0||n==0) return 0;
    return n+Solution(m-1,n);
}

int main(){
    cout<<Solution(4,3);
}