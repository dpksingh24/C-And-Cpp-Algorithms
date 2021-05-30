// binary search firnt will be in sorted order

#include <iostream>
using namespace std;

int binarySearch(int array[], int size, int key)
{
    int s = 0;    // starting value is 0
    int e = size; // ending value is size

    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (array[mid] == key)
        {
            return mid;
        }
        else if (array[mid] > key)
        {
            return e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

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
    cout << "enter your key: ";
    cin >> key;

    cout << binarySearch(array, size, key) << endl;

    return 0;
}

// TIME COMPLEXITY
// ## After first iteration, length of array -> n
// ## After second iteration, length of array -> n/2
// ## After third iteration, length of array -> (n/2)/2 = n/2^2
// ## After k iteration, length of array -> n/2^k

// let the length of array become 1 after k iteration
// => n/2^k = 1
// => n = 2^k2
// => log2(n) = log2(2^k)
// => log2(n) = k log2^2
// => k = log^n 2
// TIME COMPLEXITY
// 0 (log^n)