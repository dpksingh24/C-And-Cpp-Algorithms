#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "deepak";
    string sub_str = "ep";

    int S = sub_str.length(), T = str.length(); // find the length of string;
    for (int i = 0; i < T - S + 1; ++i)         // T -S + 1 iterate in str if sub_string length  is 2 there there is no need to check the full string
    {
        if (str.substr(i, S) == sub_str) // check  str substr(start from i upto S which is size of substring and == substr)
            cout << i << "\n";           // then print i index
    }
    return 0;
}

// string substr (size_t pos =0, size_t len = npos);

// time complexity = O(S*T)