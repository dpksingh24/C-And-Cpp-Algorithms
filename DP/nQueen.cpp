#include <iostream>
using namespace std;

// x = row
// y = column
// n = for matrix
bool isSafe(int **arr, int x, int y, int n)
{
    // check queen already in board or not
    for (int row = 0; row < x; row++)
    {
        if (arr[row][y] == 1)
        {
            return false;
        }
    }
    // check for diagonal
    // we have two itterator row-- but col ++
    int row = x;
    int col = y;
    // check row is equal to 0
    // check left diagonal
    while (row >= 0 && col >= 0)
    {
        if (arr[row][col] == 1)
        {
            return false;
        }
        row--;
        col--;
    }
    // check right diagonal
    row = x;
    col = y;
    while (row >= 0 && col < n)
    {
        if (arr[row][col] == 1)
        {
            return false;
        }
        row--;
        col++;
    }
    return true;
}

// we dont need to check next col
//  if we've to placed our qeen then we've to jump into next row
bool nQueen(int **arr, int x, int n)
{
    // we placed our nqueen
    if (x >= n)
    {
        return true;
    }

    // check position is safe or not for every row and column
    for (int col = 0; col < n; col++)
    {
        if (isSafe(arr, x, col, n))
        {
            // placed 1 in col of x
            arr[x][col] = 1;
            // check are we placing queen in the next row
            if (nQueen(arr, x + 1, n))
            {
                return true;
            }
            // if not return true then col will be 0
            arr[x][col] = 0; // backtracking
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;

    // 2D array
    int **arr = new int *[n];
    // memory allocation for 1D Arr
    for (int i = 0; i < n; ++i)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; ++j)
        {
            arr[i][j] = 0;
        }
    }
    if (nQueen(arr, 0, n))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}