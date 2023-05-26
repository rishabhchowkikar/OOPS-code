#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a, b, c;
    float q;
    float p;
    cout << "Enter the first , second and the third constant of equation :";
    cin >> a >> b >> c;
    if ((b * b - (4 * a * c)) >= 0)
    {
        q = (-b + sqrt(b * b - (4 * a * c))) / (2 * a);
        p = (-b - sqrt(b * b - (4 * a * c))) / (2 * a);
    }
    else
    {
        cout << "D is not defined";
    }
    cout << "the roots of the equation are: " << q << " " << p;
    return 0;
}