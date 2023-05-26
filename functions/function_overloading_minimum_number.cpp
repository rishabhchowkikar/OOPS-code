#include <iostream>
using namespace std;
void min(int x, int y)
{
    // return x < y ? x : y;
    if (x < y)
    {
        cout << "x is smaller one";
    }
    else
    {
        cout << "y is smaller one";
    }
}

void min(int x, int y, int z)
{
    if (x < y && x < z)
    {
        cout << "x is smaller than all three";
    }
    else if (z < x)
    {
        cout << "z is smaller than all three";
    }
    else
    {
        cout << "y is smaller than all three";
    }
}
void min(float x, float y)
{
    if (x < y)
    {
        cout << "x is smaller one";
    }
    else
    {
        cout << "y is smaller one";
        }
}
int main()
{
    int x, y, z;
    cout << "enter the two number (x and y): ";
    cin >> x >> y;
    min(x, y);
    cout << endl;

    cout << "enter the value of z: ";
    cin >> z;
    min(x, y, z);
    return 0;
}