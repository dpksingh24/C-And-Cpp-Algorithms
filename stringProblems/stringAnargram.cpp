#include <bits/stdc++.h>
using namespace std;

bool anargram(string s1, string s2)
{
    int len1 = s1.length();
    int len2 = s2.length();

    if (len1 != len2)
        return false;

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    // aabc
    // aabc

    for (int i = 0; i < len1; ++i)
    {
        if (s1[i] != s2[i])
            return false;
    }
    return true;
}

int main()
{
    string s1 = "aabc";
    string s2 = "abac";

    if (anargram(s1, s2))
        cout << "string are anargram";
    else
        cout << "string are not anargram";

    return 0;
}