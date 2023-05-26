#include <iostream>
using namespace std;
float add(float x, float y)
{
    float sum = 0;
    sum = x + y;
    return sum;
}
void max(int a, int b, int c)
{
    if (a > b && a > c)
    {
        cout << a << " is greater than all";
    }
    else if (b > c)
    {
        cout << b << " is greater than all";
    }
    else
    {
        cout << c << " is greater than all";
    }
}
int main()
{
    // adding two number
    float a, b, c;
    cout << "Enter 2 no.: ";
    cin >> a >> b;
    c = add(a, b);
    cout << "sum: " << c << endl;

    // finding maximum of 3 number
    int x, y, z;
    cout << "enter 3 number: ";
    cin >> x >> y >> z;
    max(x, y, z);
    return 0;
}