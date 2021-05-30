#include <stdio.h>
#include <conio.h>

int LinearSearch(int array[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == key)
        {
            printf("%d", i);
            break;
        }
    }
}

int main()
{
    int size;
    printf("enter size: ");
    scanf("%d", &size);

    int array[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    int key;
    printf("enter key: ");
    scanf("%d", &key);

    LinearSearch(array, size, key);

    return 0;
}
