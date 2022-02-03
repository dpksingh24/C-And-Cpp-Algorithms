#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int a = str.length();

    char removeKey = 'e';
    int j = 0;
    string temp;
    for (int i = 0; i < a; i++)
    {
        if (str[i] != removeKey) // deepak //d != e //e != e //p != e //a !=e
            temp[j++] = str[i];  // j = d p a k
    }
    temp[j] = '\0';

    for (int i = 0; i < j; i++)
        cout << temp[i];

    return 0;
}