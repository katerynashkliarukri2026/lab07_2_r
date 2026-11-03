
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "functions.h"

using namespace std;

int main()
{
    srand((unsigned)time(NULL));

    int n;
    const int Low = -20;
    const int High = 50;

    cout << "n = ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid n" << endl;
        return 1;
    }

    int** a = new int* [n];

    for (int i = 0; i < n; i++)
        a[i] = new int[n];

    CreateRows(a, n, Low, High, 0);

    cout << "Original matrix:" << endl;
    PrintRows(a, n, 0);

    if (n > 1)
        SortDiagonal(a, n, 0, 1);

    cout << "Matrix after sorting the main diagonal:" << endl;
    PrintRows(a, n, 0);

    for (int i = 0; i < n; i++)
        delete[] a[i];

    delete[] a;

    return 0;
}
