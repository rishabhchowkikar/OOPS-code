#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float radius;
    float area;
    cout << "Enter the radius of circle: ";
    cin >> radius;
    area = 3.1425 * (radius * radius);
    cout << "Area of circle would be: " << area;
    return 0;
}