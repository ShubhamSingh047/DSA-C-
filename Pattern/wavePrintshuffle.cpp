#include <bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int startvalue=1;
for(int i=1;i<=n; i++){
    for(int j=startvalue; j<startvalue+n; j++){
        cout<<j<<" ";
    }
    cout<<endl;
    if(i==(n+1)/2){
        if(n%2!=0){
            startvalue=n*(n-2)+1;
        }else{
            startvalue=n*(n-1)+1;
        }
    }else if(i>(n+1)/2){
        startvalue=startvalue-2*n;
    }else{
        startvalue=startvalue+2*n;
    }
}
}