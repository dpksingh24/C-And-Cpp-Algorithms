#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int pos = 3;

    for (int i = pos - 1; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    for (int i = 0; i < n - 1; i++)
        cout << arr[i] << " ";

    return 0;
}

// pos: 3 = 4-1=> 3value
// arr[4] = arr[3]
// output=>1 2 4 5
