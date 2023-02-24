#include<bits/stdc++.h>
using namespace std;

long maxPathSum(int ar1[], int ar2[], int m, int n)
{
    long s1=0;
    long s2=0;
    long res=0;
    int i=0;
    int j=0;
    while (i < n && j < m) {
      if (ar1[i] < ar2[j]) {
            s1+=ar1[i++];
      } else if (ar2[j] < ar1[i]) {
          s2+=ar2[j++];
      } else {
            res+=max(s1,s2);
          while(ar1[i]==ar2[j] && i<n && j<m){
            res+=ar1[i];
              s1=0; s2=0;
              i++;
              j++;
          }
      }
    }
    while (i < n) {
        s1+=ar1[i];
        i++;
    }
    while (j < m) {
        s2+=ar2[j];
        j++;
    }
    res+=max(s1,s2);
    return res;
}


int main() {

    int a[]={1, 5, 10, 15, 15, 20, 25};
    int b[]={2, 4, 5, 9, 15, 15};
    long ans = maxPathSum(a,b,7,6);
    cout << ans << endl;
    return 0;
}

