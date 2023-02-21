//with char array

#include <bits/stdc++.h>
using namespace std;

void replacePi(char input[],int index) {

	if(input[index]=='\0' && input[index+1]=='\0') return;

replacePi(input,index+1);
    if(input[index]=='p' && input[index+1]=='i'){
        int x = strlen(input);
        while (x>=index)
        {
            input[x+2]=input[x];
            x--;
        }
        input[index]='3';
        input[index+1]='.';
        input[index+2]='1';
        input[index+3]='4';

    }
}

int main(){
    char input[]="xpixxpirrpi";
    replacePi(input,0);
cout<< input;
    
}
