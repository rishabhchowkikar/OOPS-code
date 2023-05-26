#include <iostream>
using namespace std;
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << a << " " << b << " formal parameters change" << endl;
}

int main()
{
    int x = 20, y = 10;
    swap(x, y);
    cout << x << " " << y << " actuall parameter" << endl;
    return 0;
}