#include <iostream>
using namespace std;

int linearSearch(int array[], int size, int key);
int main()
{
    int size;
    cout << "enter size of an array: ";
    cin >> size;

    int array[size];
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    int key;
    cout << "enter key: ";
    cin >> key;

    cout << linearSearch(array, size, key) << endl;

    return 0;
}

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