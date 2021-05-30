#include <conio.h>
#include <stdio.h>

int BinarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size;
    int mid = start + end / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            printf("%d", mid);
            break;
        }
        else if (arr[mid] > key)
        {
            return end = mid - 1;
            end;
        }
        else
        {
            start = mid + 1;
            end;
        }
    }
    return -1;
}

int main()
{
    int size;
    printf("enter size of an array: ");
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int key;
    printf("enter key: ");
    scanf("%d", &key);

    BinarySearch(arr, size, key);

    return 0;
}
