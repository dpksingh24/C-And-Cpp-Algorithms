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
    for (int i = 0; i < n - 1; i++) // 0 //1  //2 //3 //4
    {
        if (arr[i] != arr[i + 1]) // 10 != 20 //20 !=30 //
        {
            temp[j++] = arr[i]; // temp = 10  //temp = 20
        }
    }
    temp[j] = arr[n - 1]; // arr[n-1] == temp //30

    // 10 20 30

    for (int i = 0; i <= j; ++i)
        cout << temp[i] << " ";

    return 0;
}