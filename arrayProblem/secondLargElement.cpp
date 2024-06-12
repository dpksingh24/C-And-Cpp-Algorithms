#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10, 20, 39, 40};
    int s = sizeof(arr) / sizeof(arr[0]);

    int a = INT_MIN;
    int b = INT_MIN;

    for (int i = 0; i < s; i++)
    {
        // 40>39
        if (arr[i] > a)
        {
            // b = 39
            b = a;
            // a = 40
            a = arr[i];
        }
        // 10 > 10  10 < 10
        else if (arr[i] > b && arr[i] < a)
        {
            b = arr[i];
        }
    }
    cout << "second largest is no: " << b;

    return 0;
}
