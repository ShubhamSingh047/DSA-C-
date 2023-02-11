#include<iostream>
#include<vector>
using namespace std;

void SubSequence(string str, vector<char> v, int i){
    if(i==str.size()){
        for(char i:v){
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }
    v.push_back(str[i]);
    SubSequence(str, v, i+1);
    v.pop_back();
    SubSequence(str, v, i+1);
}

int main(){
    string  str = "abc";
    vector<char> v;
    SubSequence(str, v, 0);
}