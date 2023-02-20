#include<iostream>
using namespace std;

void RemoveAllOcurance(string str, int s, char c){
    if(s==0){
        return;
    }
    if(str[s]==c){
        for(int i=s; i<str.length()-1; i++){
            str[s]=str[s+1];
        }
    }
    RemoveAllOcurance(str, s-1,c);
}

int main(){
    string str = "abcbc";
    int s= str.length();
    RemoveAllOcurance(str ,s-1 ,'b');
    cout<<str;
}