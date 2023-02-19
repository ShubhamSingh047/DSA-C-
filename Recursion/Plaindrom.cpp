#include<iostream>
using namespace std;

bool help(int s, int e, char inp[]){
    if(s>=e){
        return true;
    }
    else if(inp[s]!=inp[e]) return false;
    return help(s+1,e-1,inp);
}

bool palindrom(int e,char inp[]){
    return help(0,e,inp);
}

int main(){
    char inp[]={'n','a','m','a','n'};
    int s=sizeof(inp)/sizeof(inp[0]);
    cout<<palindrom(s-1,inp);
}