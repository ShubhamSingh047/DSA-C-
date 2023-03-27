#include <bits/stdc++.h>
using namespace std;

int main(){
    char input1[]="sinrtg";
    char input2[]="striig";
    int n1=sizeof(input1)/sizeof(input1[0]);
    int n2=sizeof(input2)/sizeof(input2[0]);
    string res="true";
    if(n1!=n2) res="false";
    map<char,int>mp;
    for (int i = 0; i < sizeof(input1) / sizeof(input1[0]); i++) {
        mp[input1[i]]++;
    }
    for (int j = 0; j < sizeof(input2) / sizeof(input2[0]); j++) {
        if(mp.find(input2[j])!=mp.end())mp[input2[j]]--;
        if(mp.find(input2[j])!=mp.end() && mp[input2[j]]<0)res="false";
        else {
            res="false";
        }
    }
    cout<<res;
}