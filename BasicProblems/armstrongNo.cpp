#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 153;
    int rem = 0;
    int sum = 0;

    int temp = num;

    while (num != 0)
    {
        rem = num % 10;         // 3 //
        sum += rem * rem * rem; // 3*3*3+0=>27
        num = num / 10;         // 153/10 => 15.3=>15
    }

    if (sum == temp)
        cout << "armstrong";
    else
        cout << "not";

    return 0;
}