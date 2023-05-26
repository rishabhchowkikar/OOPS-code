#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter the value :";
    cin >> x;
    if (x >= 0)
    {
        cout << "the number assigned to x is positive";
    }
    else
    {
        cout << "The number assigned to x is negative";
    }
    return 0;
}