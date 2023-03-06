#include <bits/stdc++.h>
using namespace std;
//we need to find the GCP

int bruteForce(int a, int b){
    int res=1;
    for(int i=2; i<=min(a,b); i++){
        if(a%i==0 && b%i==0){
            res=i;
        }
    }
    return res;
}

int betterSol(int a, int b){
    int res=1;
    for(int i=min(a,b); i>1; i--){
        if(a%i==0 && b%i==0){
            res=i;
            break;
        }
    }
    return res;
}

//Optimum ecludian Number
int Euclidean(int a, int b){
    while(a>0 && b>>0){
        if(a>b) a=a%b;
        else b=b%a;
    }
    if(a==0)return b;
    else return a;
}

int main(){
    int a,b;
    cin>>a>>b;
    // cout<<bruteForce(a,b)<<endl;
    //TC brute force O(n)
    // cout<<betterSol(a,b)<<endl;
    //TC BetterSol force O(n)
    // cout<<Euclidean(a,b)<<endl;
    //Tc of eucladian is O(log base phi min(a.b))
}