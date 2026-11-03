
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "functions.h"

using namespace std;

void CreateRow(int** a, const int n, const int Low, const int High,
    const int row, const int col)
{
    a[row][col] = Low + rand() % (High - Low + 1);

    if (col < n - 1)
        CreateRow(a, n, Low, High, row, col + 1);
}

void CreateRows(int** a, const int n, const int Low, const int High,
    const int row)
{
    CreateRow(a, n, Low, High, row, 0);

    if (row < n - 1)
        CreateRows(a, n, Low, High, row + 1);
}

void PrintRow(int** a, const int n, const int row, const int col)
{
    cout << setw(4) << a[row][col];

    if (col < n - 1)
        PrintRow(a, n, row, col + 1);
    else
        cout << endl;
}

void PrintRows(int** a, const int n, const int row)
{
    PrintRow(a, n, row, 0);

    if (row < n - 1)
        PrintRows(a, n, row + 1);
    else
        cout << endl;
}

void SortDiagonal(int** a, const int n, const int i, const int j)
{
    if (a[i][i] < a[j][j])
    {
        int temp = a[i][i];
        a[i][i] = a[j][j];
        a[j][j] = temp;
    }

    if (j < n - 1)
        SortDiagonal(a, n, i, j + 1);
    else if (i < n - 2)
        SortDiagonal(a, n, i + 1, i + 2);
}
