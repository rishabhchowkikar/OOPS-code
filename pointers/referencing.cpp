#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int &y = x; // reference of x
    cout << x << " " << y << endl;
    x++;
    y++;
    cout << x << " " << y << endl;

    cout << &x << " " << &y;

    return 0;
}