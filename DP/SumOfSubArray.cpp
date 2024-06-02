#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        int curr = 0;
        for (int j = i; j < size; j++)
        {
            curr += arr[j];
            cout << curr << endl;
        }
    }
    return 0;
}