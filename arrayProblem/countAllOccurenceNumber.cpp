#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    unordered_map<int, int> arrmap;
    // Traverse through array elements and
    // count frequencies
    for (int i = 0; i < n; i++)
    {
        arrmap[arr[i]]++;
    }
    // Traverse through map and print frequencies
    for (auto ans : arrmap)
    {
        cout << ans.first << " " << ans.second << endl;
    }
    return 0;
}
