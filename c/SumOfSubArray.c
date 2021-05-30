#include <stdio.h>
#include <conio.h>

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

    for (int i = 0; i < size; i++)
    {
        int curr = 0;
        for (int j = i; j < size; j++)
        {
            curr += arr[j];
            printf("\n%d\n", curr);
        }
    }
    return 0;
}