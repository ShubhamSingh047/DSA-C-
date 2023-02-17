#include<iostream>
using namespace std;

void Toh(int n, string Sc, string Ds, string Hp){
    if(n==0){
        return;
    }
    //we just to focus on moving last disk manually rest 2 disk will move on there own;
    Toh(n-1,Sc,Hp,Ds);
    cout<<"Move: "<<n<<" from "<<Sc<<" to "<<Ds<<endl;
    Toh(n-1,Hp,Ds,Sc);
}

int main(){
    Toh(4,"source","Dest","Help");
}