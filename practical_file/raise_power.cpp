#include <iostream>
#include <math.h>
using namespace std;
int power(int n, double m)
{

    double c = pow(m, n);
    return c;
}
int main()
{
    int n;
    double m;
    double result;
    cout << "enter the value of m and n: ";
    cin >> m >> n;
    result = (float)power(n, m);
    cout << "the raise a bumber m to a power n: " << result << endl;
    return 0;
}