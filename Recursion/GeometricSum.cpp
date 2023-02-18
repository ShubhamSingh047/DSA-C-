#include<iostream>
#include<cmath>
using namespace std;

double GeometricSum(int n){
    if(n==0){
        return 1;
    }
    double res=GeometricSum(n-1);
    return res+1/pow(2,n);
}

int main(){
    int n;
    cin>>n;
    cout<<GeometricSum(n);
}