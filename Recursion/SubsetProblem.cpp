#include<iostream>
using namespace std;

void SubetSolu(string str, string output){
    if(str.length()==0){
        cout<<output;
        return;
    }
    SubetSolu(str.substr(1),output);
    SubetSolu(str.substr(1),output+str[0]);
}
int main(){
    string str;
    string output=" ";
    str="abc";
    SubetSolu(str,output);
    return 0;
}