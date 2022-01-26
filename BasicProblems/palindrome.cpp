#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 121;
    int rem;
    int sum = 0;

    int temp = num;
    while (num > 0)
    {
        rem = num % 10;       // 1 // 2 //1
        sum = sum * 10 + rem; // sum = 0 => sum = 1; sum = 12
        num = num / 10;       // 12//1
    }

    if (temp == sum)
        cout << sum;
    else
        cout << "not a palindrome no.";

    return 0;
}