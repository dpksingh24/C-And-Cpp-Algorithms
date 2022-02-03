#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
    char str[] = "deepak";
    int freq[256] = {};
    for (int i = 0; str[i] != '\0'; i++)
    {
        freq[str[i]]++;
    }

    for (int i = 0; i < 256; i++)
    {
        if (freq[i] != 0)
        {
            cout << (char)i << ":" << freq[i] << endl;
        }
    }
    return 0;
}