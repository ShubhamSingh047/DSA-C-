#include <bits/stdc++.h>
using namespace std;

// int main(){
//     int arr[]={1,2,3,4,5};
//     for(int i=0; i<5; i++){
//         for(int j=i; j<5; j++){
//             cout<<arr[j]<<" ";
//         }
//         cout<<endl;
//     }
// }

int main(){
    int arr[]={1,2,3,4,5};
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
        for(int j=i+1; j<5; j++){
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
}