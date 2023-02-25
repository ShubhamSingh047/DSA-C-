#include<bits/stdc++.h>
using namespace std;

void reverse(string str,int l, int r ){
    while(l<=r){
        swap(str[l],str[r]);
        l++;
        r--;
    }
}
void reverseSentance(string str){
    // str.insert(str.end(), ' ');
    // int j=0;
    // for(int i=0;i<str.length(); i++){
    //     if(str[i]==' '){
    //        reverse(str, j,i-1); 
    //     }
    //     j=i+1;
    // }
    // str.pop_back();
    reverse(str, 0, str.length() - 1);
}

int main(){
    string str="shubham is king";
    reverseSentance(str);
    cout<<str;
}