#include<iostream>
#include <cmath>
using namespace std;

int Grammer(int n, int k){
    if (n==1||k==1){
        return 0;
    }
    int mid=pow(2,n-1)/2;
    return (k<=mid)?Grammer(n-1,k):!Grammer(n-1,k-mid);
}

int main(){
    int n=5;
    
    int res=Grammer(n,7); 
    cout<<res;
}
