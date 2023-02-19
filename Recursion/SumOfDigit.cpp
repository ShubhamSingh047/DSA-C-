#include<iostream>
using namespace std;

int SumDigit(int n){
    if(n==0)return 0;
    return n%10+SumDigit(n/10);
}

int main(){
    int n;
    cin>>n;
    cout<<SumDigit(n);
}