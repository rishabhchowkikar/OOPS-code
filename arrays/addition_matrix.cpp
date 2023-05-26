#include <iostream>
using namespace std;
int main()
{

    int n, m;
    cout << "enter the number of row and column in matrix: ";
    cin >> n >> m;
    int a[n][m];
    int b[n][m];

    int c[n][m];
    cout << "enter the element in first array: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Enter the element in second array: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    cout << "the sum of two matrix would be: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}