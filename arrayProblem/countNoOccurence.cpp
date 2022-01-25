#include <bits/stdc++.h>
using namespace std;

int occure(int arr[], int key, int s)
{
    int res = 0;
    for (int i = 0; i < s; ++i)
    {
        if (arr[i] == key)
            res++;
    }
    return res;
}

int main()
{
    int arr[] = {1, 2, 2, 2, 2, 3, 4, 7, 8, 8};
    int s = sizeof(arr) / sizeof(arr[0]);

    int key = 2;

    cout << occure(arr, key, s);

    return 0;
}