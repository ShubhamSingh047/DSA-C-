#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=0;
    for(int i=5; n/i>0s; i*=5){
        ans+=(n/i);
    }
    cout<<ans;
}