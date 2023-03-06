#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    string s;
    s.insert(s.begin(),str[0]);
    int i=1;
    while(i<str.length()){
        if(str.substr(i,3)=="abc"){
            
        }else{
            s+=str[i];
            i++;
        }
    }
    cout<<s<<endl;
}

