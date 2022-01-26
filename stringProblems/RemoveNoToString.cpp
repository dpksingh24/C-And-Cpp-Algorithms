#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    int counter = 0;
    for (int i = 0; i < str.length(); ++i)
        if (!isdigit(str[i]))
            str[counter++] = str[i];

    cout << str.substr(0, counter);

    return 0;
}