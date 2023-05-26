#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 5, c = 15;
    int x = 5;
    // x = x + a + b + c;
    x += a + b + c;

    cout << "Sum is: " << x;
    return 0;
}