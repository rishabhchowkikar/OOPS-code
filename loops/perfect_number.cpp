#include <iostream>
using namespace std;
int main()
{
    int n, i, sum = 0;
    cout << "Enter the number: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            sum = sum + i;
        }
    }
    if (n * 2 == sum)
    {
        cout << "\n"
             << n << " is a Perfect number";
    }
    else
    {
        cout << "\n"
             << n << " is not a perfect number";
    }
    return 0;
}