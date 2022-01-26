#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 5, 1, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 5)
        {
            arr[i] = 0;
        }
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

// input =>  125135
// output => 120130
