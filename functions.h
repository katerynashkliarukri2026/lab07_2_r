
#pragma once

void CreateRow(int** a, const int n, const int Low, const int High,
    const int row, const int col);

void CreateRows(int** a, const int n, const int Low, const int High,
    const int row);

void PrintRow(int** a, const int n, const int row, const int col);

void PrintRows(int** a, const int n, const int row);

void SortDiagonal(int** a, const int n, const int i, const int j);
