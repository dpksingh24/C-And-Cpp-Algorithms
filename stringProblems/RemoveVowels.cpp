#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "abcde";
    int len = str.length();

    for (int i = 0; i < len; ++i)
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            for (int j = i; j < len; j++)
            {
                str[j] = str[j + 1];
            }
            len--;
        }

    cout << str;
    return 0;
}