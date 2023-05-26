#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter 3 number(a,b,c) : ";
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        cout << "a is greater";
    }
    else
    {
        if (b > c)
        {
            cout << "B is greater";
        }
        else
        {
            cout << "C is greater";
        }
    }
}