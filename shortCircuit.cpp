#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 5, i = 5, j = 5;
    if (a < b && ++i <= b)
    {
    }
    if (a < b || ++j <= b)
    {
    }

    cout << i << endl;
    cout << j << endl;

    return 0;
}