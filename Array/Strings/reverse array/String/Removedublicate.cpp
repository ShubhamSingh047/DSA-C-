#include<bits/stdc++.h>
using namespace std;

string Solution(string str){
    string s;
    s.insert(s.begin(), str[0]);
    int i=1;
    int j=0;
    while(i<str.length()){
        if(str[i]!=s[j]){
            s+=str[i];
            j++;
        }else{
            s.pop_back();
            j--;
        }
        i++;
    }
    return s;
}

int main(){
    string str;
    cin>>str;
    cout<<str[-1];
    cout<<Solution(str);
}