#include <iostream>
using namespace std;
int main()
{
    int n, r, rev = 0, m, remain, hello;
    cout << "Enter the number: ";
    cin >> n;
    m = n;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        rev = rev * 10 + r;
        hello = rev;
        // for printing
    }
    while (rev > 0)
    {

        remain = rev % 10;
        rev = rev / 10;
        switch (remain)
        {
        case 1:
            cout << " One ";
            break;

        case 2:
            cout << " Two ";
            break;

        case 3:
            cout << " Three ";
            break;

        case 4:
            cout << " Four ";
            break;

        case 5:
            cout << " Five ";
            break;

        case 6:
            cout << " Six ";
            break;

        case 7:
            cout << " Seven ";
            break;

        case 8:
            cout << " Eight ";
            break;

        case 9:
            cout << " Nine ";
            break;

        case 0:
            cout << " Zero ";
            break;
        default:
            cout << " Not a number ";
            break;
        }
    }

    cout << "\nReverse of number " << m << " is: " << hello;
    return 0;
}