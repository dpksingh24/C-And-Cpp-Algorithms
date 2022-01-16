#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int s = 0;
    int e = n - 1;
    int temp = 0;
    while (s < e)
    {
        temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;

        s++;
        e--;
    }

    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";

    return 0;
}
// Time complexity: O(n)
// n is the number of element
