void helper(int s,int e, char input[]){
    if(input[s]=='\0' || input[s+1]=='\0')return;
   
	helper(s+1,e,input);

     if(input[s]=='p' && input[s+1]=='i'){
        for(int i=e; i>=s+2; i++){
            input[i+2]=input[i];
        }
        input[s]='3';
        input[s+1]='.';
        input[s+2]='1';
        input[s+3]='4';
    }
}

void replacePi(char input[]) {
	// Write your code here
	int e=0;
    for(int i=0; input[i]!='\0'; i++)e++;
	helper(0, e-1,input);
}


int main(){
    char input[]="pixpi";
    replacePi(input);
}