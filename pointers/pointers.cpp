#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *p = &a;
    cout << a << endl;
    cout << &a << endl;
    cout << p << endl;
    cout << &p << endl;
    cout << *p << endl; // dereferencing a pointer
    return 0;
}