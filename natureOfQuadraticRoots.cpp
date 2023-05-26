#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a, b, c, d, r1, r2;
    cout << "Enter a,b,c values: ";
    cin >> a >> b >> c;
    d = (b * b) - (4 * a * c);
    if (d == 0)
    {
        cout << "roots are real and eq " << endl;
        cout << (-b / (2 * a));
    }
    else if (d > 0)
    {
        cout << "roots are not equal but real \n";
        cout << ((-b + sqrt(d)) / (2 * a)) << " " << ((-b - sqrt(d)) / (2 * a)) << endl;
    }
    else
    {
        cout << "roots are imaginary";
    }
    return 0;
}