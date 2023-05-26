#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter the value of X: ";
    cin >> x;
    cout << "Enter the value of Y: ";
    cin >> y;
    if (x > y)
    {
        cout << "x is greater than y";
    }
    else
    {
        cout << "y is greater than x";
    }
}