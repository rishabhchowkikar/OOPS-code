#include <iostream>
using namespace std;
int main()
{
    int a, b;
    float c;
    cout << "Enter the values of a, b: ";
    cin >> a >> b;
    if (b == 0)
    {
        cout << "Invalid division as b = 0";
    }
    else
    {
        c = (float)a / b;
        cout << "Division of " << a << " & b " << b << " is : " << c;
    }
    return 0;
}