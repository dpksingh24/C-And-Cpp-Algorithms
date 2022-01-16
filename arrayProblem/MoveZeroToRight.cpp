#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 0, 2, 0, 3, 5};
    int s = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + s);

    int temp[] = {};
    int j;
    for (int i = 0; i < s - 1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            temp[j++] = arr[i + 1];
        }
    }
    temp[j] = arr[s - 1];
    for (int i = j; i < s; i++)
        temp[j++] = 0;

    for (int i = 0; i < j; ++i)
        cout << temp[i] << " ";

    return 0;
}

// input=> 1, 0, 2, 0, 3, 5
// expected output=> 1 2 3 5 0 0

// time complexity => o(n)
// space complexity => o(n)
