#include<bits/stdc++.h>
using namespace std;

//wrong approch


void reverse(string ch){
    int i=0;
    while(i!='\0'){
        swap(ch[i],ch[ch.length()-i-1]);
        i++;
    }
}

int main(){
    string b;
    getline(cin,b);
    reverse(b);
    cout<<b;
}