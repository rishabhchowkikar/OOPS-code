#include <iostream>
using namespace std;

void matrix_pointers(int *arr, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << *(arr + i * c + j) << " ";
        }
        cout << endl;
    }
}

int main()
{
    int row, column;
    cout << "Enter the row and column of the matrix: ";
    cin >> row >> column;
    int a[row][column];
    cout << "enter the element of matrix: ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> a[i][j];
        }
    }
    matrix_pointers((int *)a, row, column);
    return 0;
}