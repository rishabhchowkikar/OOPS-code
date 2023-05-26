#include <iostream>
using namespace std;
int add(int x, int y)
{
    return x + y;
}
int add(int x, int y, int z)
{
    return x + y + z;
}
float add(float x, float y)
{
    return x + y;
}
int main()
{
    int a, b, c = 0;
    cout << "Enter to element: ";
    cin >> a >> b;
    c = add(a, b);
    cout << "sum of a and b : " << c;
    cout << endl;
    int d;
    d = add(a, b, c);
    cout << "Sum of a, b and c: " << d;
    cout << endl;
    float x, y, z = 0;
    cout << "Enter two values again: ";
    cin >> x >> y;
    z = add(x, y);
    cout << "Sum of x and y is: " << z;
    return 0;
}