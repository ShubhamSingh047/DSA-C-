#include <bits/stdc++.h>
using namespace std;

//hashing concept !

int main(){
    cout<<"Enter the total number of search you want to do ? "<<endl;
    int q;
    cin>>q;

    //pre computation
    int hash[26]={0};
    
    cout<<"Enter the strings "<<endl;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        hash[s[i]-'a']++;
    }

    while(q--){
        char c;
        cout<<"Enter the char you want to search"<<endl;
        cin>>c;
        cout<<hash[c-'a']<<endl;
    }
    cout<<"Thankyou !"<<endl;
}