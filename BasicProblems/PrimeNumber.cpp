#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 11;
    int flag = 0;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << "prime";
    else
        cout << "not";

    return 0;
}