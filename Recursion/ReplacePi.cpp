//with char array

#include <bits/stdc++.h>
using namespace std;


void shift(char input[], int index){
    int x = strlen(input);
    while (x>=index)
    {
        input[x+2]=input[x];
        x--;
    }
    
}

void replacePi(char input[]) {
	// Write your code here
    int i=0;
    while (input[i]!='\0'){
        if(input[i]=='p' && input[i+1]=='i'){
            shift(input,i+2);
            input[i]='3';
            input[i+1]='.';
            input[i+2]='1';
            input[i+3]='4';
            i+=4;
            continue;
        }    
        i++;
    }
}

int main(){
    char input[]="pi";
    replacePi(input);
cout<< input;
    
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

