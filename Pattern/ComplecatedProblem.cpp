#include<iostream>
using namespace std;

int main() {

  /*  n=3;
    3 3 3 3 3 
    3 2 2 2 3 
    3 2 1 2 3 
    3 2 2 2 3 
    3 3 3 3 3 
  */

  for (int i = 0; i <n*2-1; i++) {
    for (int j = 0; j <n*2-1; j++) {
      int top=i;
      int left=j;
      int right=(2*n-2)-j;
      int bottom=(2*n-2)-i;
      cout<<(n-min(min(top,bottom), min(left,right)))<<" ";
    }
	cout<<endl;
  }
}
