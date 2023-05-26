#include <iostream>
using namespace std;
int main()
{
    float a = 0.5;
    float base, height;
    float area;
    cout << "Enter the base and height :";
    cin >> base >> height;
    area = a * base * height;
    cout << "Area of triangle is : " << area;
    return 0;
}