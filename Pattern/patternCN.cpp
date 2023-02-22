#include <iostream>
using namespace std;

int main() {
  // pattern n=4
//   1      1
//   12    21
//   123  321
//   12344321
  int N;
  cin >> N;
  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= i; j++) {
      cout << j;
    }
    for (int k = N - i; k >= 1; k--) {
      cout << " ";
    }
    for (int j = N - i; j >= 1; j--) {
      cout << " ";
    }
    for (int k = i; k >= 1; k--) {
      cout << k;
    }
    cout << endl;
  }
}
