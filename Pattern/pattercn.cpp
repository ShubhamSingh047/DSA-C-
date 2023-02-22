#include <iostream>
using namespace std;

// n=4
//       1
//      23
//  ```345
//  ``4567

int main()
{
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        for (int j = N - i; j >= 1; j--)
        {
            cout << " ";
        }
        for (int k = i; k <= 2*i - 1; k++)
        {
            cout << k;
        }
        cout << endl;
    }
}