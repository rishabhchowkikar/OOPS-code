#include <iostream>
using namespace std;
int main()
{
    int height, radius;
    float volume;
    cout << "Enter the Height and Radius of the cylinder(in cm): ";
    cin >> height >> radius;
    volume = (3.1425) * radius * radius * height;
    cout << "Volume of the cylinder: " << volume;
    return 0;
}