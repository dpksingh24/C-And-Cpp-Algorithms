#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10, 20, 40};
    int s = sizeof(arr) / sizeof(arr[0]);

    // sort(arr, arr + s);
    // 1,5,,11,12

    int max = arr[0];
    int j = 0;

    for (int i = 0; i < s; ++i)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    cout << max;
    return 0;
}