#include <bits/stdc++.h>
using namespace std;

int main()
{
  	string str = "deepak";
	int len = str.length();
    int i = 0;
    int j = len - 1;
    int temp = 0;
    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }
    cout << str;
    return 0;
}
