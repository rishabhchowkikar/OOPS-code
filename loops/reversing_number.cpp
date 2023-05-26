#include <iostream>
using namespace std;
int main()
{
    int n, r, m;
    int reverse = 0;
    cout << "Enter the number: ";
    cin >> n;
    m = n;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        cout << r << " ";
        reverse = reverse * 10 + r;
    }
    cout << "\nThe reverse of " << m << " is: " << reverse;
    return 0;
}