#include<iostream>
using namespace std;

void helper(int s, int e, char input[]){
	if(s==0 || e==1) return;
	if(s=='p'||s+1=='i'){
		for (int i = e; i >= s + 2; i--) {
            input[i + 2] = input[i];
        }
        input[s] = '3';
        input[s + 1] = '.';
        input[s + 2] = '1';
        input[s + 3] = '4';
    }
	helper(s+1, e, input);
}

void replacePi(char ch[]) {
	int e=sizeof(ch)/sizeof(ch[0]);

    cout<<e<<endl;
	helper(0,e-1,ch);
}

int main(){
    char ch[] ={'a','p','i','l','l','p','a'};
    replacePi(ch);
    for(auto i:ch)cout<<i;
}
