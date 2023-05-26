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
    cout << "\nthe sum of factors: " << sum;
    return 0;
}