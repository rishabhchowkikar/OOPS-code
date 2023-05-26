#include <iostream>
using namespace std;
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int *p = a;
    int *q = &a[4];

    cout << *p << endl;
    // pointer arithematic
    p++;
    cout << *p << endl;

    p--;
    cout << *p << endl;

    p = p + 2;
    cout << *p << endl;

    p = p - 2;
    cout << *p << endl;

    int d = q - p;
    cout << d << endl;

    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << p + i << endl;
    }

    return 0;
}