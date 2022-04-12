#include <bits/stdc++.h>
using namespace std;

void printMissingElements(int arr[], int N)
{
    int diff = arr[0] - 0;

    for (int i = 0; i < N; i++)
    {
        if (arr[i] - i != diff)
        {
            while (diff < arr[i] - i)
            {
                cout << i + diff << " ";
                diff++;
            }
        }
    }
}

int main()
{
    int arr[] = {6, 7, 10, 11, 13};

    int N = sizeof(arr) / sizeof(int);
    printMissingElements(arr, N);

    return 0;
}

// method 2
#include <bits/stdc++.h>
using namespace std;

// Function to find the missing elements
void printMissingElements(int arr[], int N)
{
    int cnt = 0;
    for (int i = arr[0]; i <= arr[N - 1]; i++)
    {
        // Check if number is equal to the first element in
        // given array if array element match skip it increment for next element
        if (arr[cnt] == i)
        {
            // Increment the count to check next element
            cnt++;
        }
        else
        {
            // Print missing number
            cout << i << " ";
        }
    }
}
// Driver Code
int main()
{
    // Given array arr[]
    int arr[] = {6, 7, 10, 11, 13};
    int N = sizeof(arr) / sizeof(arr[0]);
    // Function Call
    printMissingElements(arr, N);

    return 0;
}