#include <bits/stdc++.h>
using namespace std;

int bubbleSort(int arr[], int size)
{
    int temp, i;
    for (int i = 1; i < (size - 1); i++)
        for (int j = 0; j < (size - i); j++)

            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

int main()
{
    int arr[] = {9, 2, 1, 0, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, size);
    return 0;
}
