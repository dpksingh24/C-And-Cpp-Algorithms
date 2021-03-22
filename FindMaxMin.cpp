#include <iostream>
#include <climits>
using namespace std;

int main()
{

    int s;
    cin >> s;

    int arr[s];
    for (int i = 0; i < s; i++)
    {
        cin >> arr[i];
    }

    int maxNumber = INT_MIN;
    int MinNumber = INT_MAX;

    for (int i = 0; i < s; i++)
    {

        // different approaches
        maxNumber = max(maxNumber, arr[i]);
        MinNumber = min(MinNumber, arr[i]);

        // if (arr[i] > maxNumbser)
        // {
        //     maxNumber = arr[i];
        // }
        // if (arr[i] < MinNumber)
        // {
        //     MinNumber = arr[i];
        // }
    }
    cout << maxNumber << " " << MinNumber << endl;

    return 0;
}