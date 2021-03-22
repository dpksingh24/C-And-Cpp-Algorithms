#include <iostream>
using namespace std;

int linearSearch(int array[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    int size;
    cout << "enter size: ";
    cin >> size;

    int array[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    int key;
    cout << "enter the key: ";
    cin >> key;

    cout << linearSearch(array, size, key);
}