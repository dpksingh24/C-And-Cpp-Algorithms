#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int pos = 3;
    int val = 55;

    for (int i = n++; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = val;

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}