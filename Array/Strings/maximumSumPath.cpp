#include<bits/stdc++.h>
using namespace std;

long maxPathSum(int ar1[], int ar2[], int m, int n) {
  long s1 = 0;
  long s2 = 0;
  long res = 0;
  int i = 0;
  int j = 0;
  while (i < m && j < n) {
    if (ar1[i] < ar2[j]) {
      s1 += ar1[i++];
    } else if (ar2[j] < ar1[i]) {
      s2 += ar2[j++];
    } else {
      res += max(s1, s2);
      s1 = 0;
      s2 = 0;
      while (i < m && j < n&&ar1[i] == ar2[j]) {
        res += ar1[i];
        i++;
        j++;
      }
    }
  }
  while (i < m) {
    s1 += ar1[i];
    i++;
  }
  while (j < n) {
    s2 += ar2[j];
    j++;
  }
  res += max(s1, s2);
  return res;
}

int main(){
    int a[]={1, 5, 10, 15, 15, 20, 25};
    int b[]={2, 4, 5, 9, 15, 15};
    int m=7;
    int n=6;
    cout<<maxPathSum(a,b,m, n);
}