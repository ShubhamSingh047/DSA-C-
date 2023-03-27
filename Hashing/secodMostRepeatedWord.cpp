#include <bits/stdc++.h>
using namespace std;

int main(){
    string arr[] = {"aaa", "bbb", "ccc", "aaa", "bbb", "aaa"};
    map<string,int>mp;
    for (int j = 0; j < 6; j++) {
        mp[arr[j]]++;
    }
    int max=0 ,s_max=0;
    string res="";
    for (auto i = mp.begin(); i != mp.end(); i++) {
        if(i->second>max)max=i->second;
        else if(i->second>s_max){
            s_max=i->second;
            res=i->first;
        }
    }
    cout<<res<<endl;
}