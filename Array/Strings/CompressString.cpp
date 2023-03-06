#include<bits/stdc++.h>
using namespace std;

string Compressed2(string &str){
    string s;
    s.insert(s.begin(),str[0]);
    for(int i=1; i<str.length(); i++){
        if(str[i]!=str[i-1]){
            s+=str[i];
        }
    }
    return s;
}

string Compressed1(string &str){
    string s;
    s.insert(s.begin(),str[0]);
    int c=1;
    for(int i=1; i<str.length(); i++){
        if(str[i]==str[i-1]){
            c++;
        }else{
            if(c>1){
                s+=to_string(c);
            }
            s=s+str[i];
            c=1;
        }
    }
    s+=to_string(c);
    return s;
}

int main(){
    string str;
    cin>>str;
    string res1=Compressed1(str);
    // string res2=Compressed2(str);
    cout<<res1<<endl;
    // cout<<res2<<" with only compression"<<endl;
}