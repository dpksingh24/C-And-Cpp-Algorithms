#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int s = str.length();

    int a = 0;
    int b = s - 1;

    int temp = 0;
    for (int i = str.length() - 1; i < 0; --i)
    {
        temp = str[i];
        str[i] = str[b];
        str[b] = temp;

        b--;
    }

    return 0;
}

// "12,13,14"
// 14 13 12
// 41,31,21