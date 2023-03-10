#include <bits/stdc++.h>
using namespace std;

int main(){
    pair<int, int> arr[]={{11, 20}, {30, 40}, {5, 10}, {40, 30}, {10, 5}};
    int n= sizeof(arr)/sizeof(arr[0]);
    for (int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++)
        if(arr[i].first==arr[j].second && arr[i].second==arr[j].first){
            cout<<arr[i].first<<" "<<arr[i].second<<endl;
            break;
        }
    }
}