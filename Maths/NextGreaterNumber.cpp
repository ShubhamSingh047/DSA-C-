#include <bits/stdc++.h>
using namespace std;

void Solution(char num[],int n){
    int i,j;
    for(i=n-1; i>0; i--){
        if(num[i]>num[i-1]){
            break;
        }
    }
    if (i==0) {
        cout<<"Not Possible";
        return;
    }
    int x=num[i-1], small=i;
    for(j=i+1; j<n; j++){
        if(num[j]>x && num[j]<num[small]){
            small=j;
        }
    }
    swap(num[small], num[i-1]);
    cout<<"after swaping "<<num<<endl;
    sort(num + i, num + n);
    cout<<"after sorting "<<num<<endl;
    return;
}

int main(){
    char num[] = "534976";
    int n=strlen(num);
    Solution(num,n);
    cout<<num<<" updated"<<endl;
}