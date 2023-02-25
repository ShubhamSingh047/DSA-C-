//with char array

#include <bits/stdc++.h>

using namespace std;

void reverse(char input[],int s,int l) {

	while (s<=l){
        // cout<<input[s]<<input[l];
        swap(input[s],input[l]);
        s++;
        l--;
    }
    
}

int main(){

    char input[]="raf tara fta";

    int start=0;
    for (int i = 0; i < strlen(input); i++)
    {
        if (input[i]==' ' || input[i+1]=='\0')
        {
            if(input[i+1]=='\0'){
                reverse(input,start,i);
                break;
            }else{
                reverse(input,start,i-1);
                start=i+1;
            }            
        }
        
    }
    
    cout<<input;
    return 0;
    
}
