#include <iostream>
using namespace std;

int main() {
    /* print n=4
        1
       232
      34543
     4567654
     */
     int n;
     cin>>n;
    for (int i =1; i <= n; i++) {
      for (int m = n - i; m >= 1; m--) {
          cout<<" ";
      }
       for(int j = i; j<2*i-1 ; j++){
           cout<<j;
       }
       for (int k = 2 * i - 1; k >= i; k--) {
           cout<<k;
       }
    cout<<endl;
    }
}
