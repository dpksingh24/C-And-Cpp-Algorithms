#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[20] = {"abcd"};
    int s = strlen(str);

    char a = 0;
    char b = s - 1;
    char temp = 0;
    while (a < b)
    {
        temp = str[a];
        str[a] = str[b];
        str[b] = temp;

        a++;
        b--;
    }
    cout << str;

    return 0;
}