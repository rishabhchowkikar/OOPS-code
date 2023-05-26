#include <iostream>
#include <cstdio>
using namespace std;

int power(int x, int y)
{
    float power = 1;
    for (int i = 0; i < y; i++)
    {
        power = power * x;
    }
    return power;
}
int main()
{
    int a, b, r = 0;
    cout << "enter two number: ";
    cin >> a >> b;
    r = power(a, b);
    cout << "power of " << a << " to " << b << " is " << r << endl;
    return 0;
}