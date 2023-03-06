#include <bits/stdc++.h>
using namespace std;

int Solution(int arr1[], int arr2[], int n, int m){
    int res=0;
    for(int i=0; i<n; i++){
        bool flag=false;
        for(int j=0; j<i-1; j++){
            if(arr1[i]==arr1[j]){
                flag=true; 
                break;
            }
        }
        if(!flag){
            continue;
        }else{
            for(int k=0; k<m; k++){
                if(arr1[i]==arr2[k])res++;
            }
        }
    }
    return res;
}

int main(){
    int arr1[]={10,20,30,20,30,15,5};
    int arr2[]={30,5,30,80};

    cout<<Solution(arr1, arr2, 7, 4);
}