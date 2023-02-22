#include<iostream>
using namespace std;

//printing:-
// 1
// 13
// 135
// 1357

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1; j<=i;j++){
            cout<<j+j-1;
        }
        cout<<endl;
    }
    return 0;
}