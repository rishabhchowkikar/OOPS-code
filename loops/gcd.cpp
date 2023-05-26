#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter 2 number n,m: ";
    cin >> m >> n;
    while (m != n)
    {
        if (m > n)
        {
            m = m - n;
        }
        else if (n > m)
        {
            n = n - m;
        }
    }
    cout << "GCD of both number: " << m;
}