#include <bits/stdc++.h>
using namespace std;

void prime(int num)
{
    int sum = 0;
    int j, i, flag;

    cout << "prime no are: ";
    for (i = 2; i < num; ++i)
    {
        flag = 0;
        for (j = 2; j < i; ++j)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << i << " ";
        if (flag == 0)
            sum = sum + i;
    }
    cout << "sum: " << sum;
}

int main()
{
    int num = 20;
    prime(num);

    return 0;
}