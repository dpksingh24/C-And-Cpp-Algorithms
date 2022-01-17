#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10, 20, 20, 10, 30};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n);
    // 10 10 20 20 30

    int temp[] = {};
    int j = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            temp[j++] = arr[i];
        }
    }
    temp[j] = arr[n - 1];

    for (int i = 0; i <= j; ++i)
        cout << temp[i] << " ";

    return 0;
}