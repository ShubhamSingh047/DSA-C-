#include<iostream>
using namespace std;

int CountZero(int n){
    //excpetion handeling
    if(n==0) return 1;
    // actual base case
    if(n<10) return 0;
    if(n%10==0){
        return CountZero(n/10)+1;
    } 
    return CountZero(n/10);
}

int main(){
    cout<<CountZero(30452032);
}