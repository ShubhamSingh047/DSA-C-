//with char array

#include <bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>

void replacePi(char input[]) {
	// Write your code here
	   if(input[0]=='\0' || input[1]=='\0')return;
   
	replacePi(input+1);

     if(input[0]=='p' && input[1]=='i'){
        for(int i= strlen(input); i>=2; i--){
            input[i+2]=input[i];
        }
        input[0]='3';
        input[1]='.';
        input[2]='1';
        input[3]='4';
    }
}

int main(){
    char input[]="pixpi";
    replacePi(input);
    for(auto i:input)cout<<i;
}


//with String


// #include<bits/stdc++.h>
// using namespace std;

// string replacePi(string s){
//     if(s.length()==0 || s.length()==1)return s;

//     if(s[0]=='p'&& s[1]=='i'){
//         string res=replacePi(s.substr(2));
//         return "3.14"+res;
//     }else{
//         return s[0]+replacePi(s.substr(1));
//     }
// }

// int main(){
//     string str="pipixpipi";
//     cout<<replacePi(str);
// }

