#include <iostream>
using namespace std;
int main()
{
    int n, r, reverse = 0, m;
    cout << "Enter the number: ";
    cin >> n;
    m = n;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        reverse = reverse * 10 + r;
    }
    if (m == reverse)
    {
        cout << "\nthe number is palindrome";
    }
    else
    {
        cout << "\nnot an palindrome";
    }

    cout << "\nthe reverse number is: " << reverse;
    return 0;
}