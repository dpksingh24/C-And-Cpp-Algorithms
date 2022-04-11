#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "deepak";
    int len = str.length();

    char a = 0;
    char b = len - 1;
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


/* 2nd method */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "deepak";

    int len = str.length();
    int n = len - 1;
    for (int i = 0; i < len / 2; i++)
    {
        char temp = str[i];
        str[i] = str[n];
        str[n] = temp;
        n = n - 1;
    }

    cout << str;

    return 0;
}
