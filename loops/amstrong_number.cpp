#include <iostream>
using namespace std;
int main()
{
    int n, r, m, sum = 0;
    cout << "Enter the number: ";
    cin >> n;
    m = n;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        cout << r << " ";
        sum = sum + (r * r * r);
    }
    if (m == sum)
    {
        cout << "\n"
             << m << " is an amstrong number";
    }
    else
    {
        cout << "\n"
             << m << " is not an amstrong number";
    }
    return 0;
}