#include <iostream>
using namespace std;
int main()
{
    int u, v, a;
    float s;
    cout << "Enter the initial speed, final speed and acceleration: ";
    cin >> u >> v >> a;
    s = ((v * v) - (u * u)) / (2 * a);
    cout << "Average speed would be" << s;
    return 0;
}