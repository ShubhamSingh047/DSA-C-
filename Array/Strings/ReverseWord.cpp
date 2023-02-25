#include<bits/stdc++.h>
using namespace std;

void reverse(char str[]){
    int i=0;
    int j=0;
    while(str[i]!='\0'){
        while(str[j]!=' ')j++;
        if((str[i]!=' '&& str[j]==' ') && i<j){
            swap(str[i], str[j-i-1]);
            i++;
        }else{
            j+=1;
            i=j;
        }
    }
}

int main(){
    int n=100;
    char str[n];
    cin.getline(str,n);
    reverse(str);
    cout<<str;
}