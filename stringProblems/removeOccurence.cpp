#include <bits/stdc++.h>
using namespace std;

string removeOcc(string s)
{
    if (s.length() == 0)
    {
        return "";
    }
    char ch = s[0];
    string ans = removeOcc(s.substr(1));

    if (ch == ans[0])
    {
        return ans;
    }
    return (ch + ans);
}

int main()
{

    cout << removeOcc("deepak");

    return 0;
}

// string str = "deepak";

// sort(str.begin(), str.end());
// int len = str.length();

// string temp;
// int j = 0;

// for (int i = 0; i < len; ++i)
// {
//     if (str[i] != str[i + 1])
//         temp[j++] = str[i];
// }
// temp[j] = '\0';

// for (int i = 0; i < j; ++i)
//     cout << temp[i];

// problem-> change the order of rev string cuz i used sort algo
