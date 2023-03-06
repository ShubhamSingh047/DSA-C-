#include<iostream>
using namespace std;

void reverse(char input[], int i, int j){
    while(i<j){
        swap(input[i], input[j]);
        j++;
        i--;
    }
}

void reversechar(char input[]){
    int i=0;
    int j=0;
    int size=0;
    while(input[i]!='\0'){
        size++;
        i++;
    }
    i=0;
    while(i<size){
        if(input[i]==' '||input[i]=='\0'){
            reverse(input, i, j);
            j=i+1;
        }
        i++;
    }
}

int main(){
    char ch[1000];
    cin.getline(ch, 1000);
    reversechar(ch);
    cout<<ch;
}