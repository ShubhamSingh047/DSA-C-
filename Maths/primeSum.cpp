#include <bits/stdc++.h>
using namespace std;
/*
Given a number N find if it can be expressed as sum of
two prime number ?
Input:34
ans "yes"
34 can be expressed as sum of two prime number
*/

bool checkPrime(int x)
{
    if (x < 2)
        return false;
    for (int i = 2; i * i < x; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}

string Optimum(int x)
{
    int temp = 0;
    if (x % 2 == 0)
    {
        /*
        only 2 is the even prime number so for even
        so if number is even there can be one case that is (2,2);
        */
        if (!checkPrime(x - 2))
            return "No";
    }
    else
    {
        for (int i = 3; i * i <= x; i += 2)
        {
            temp = x - i;
            if (checkPrime(temp) && checkPrime(i))
                return "Yes";
        }
    }
    return "No";
}

int main()
{
    int x;
    cin >> x;
    cout << bruteForce(x);
}