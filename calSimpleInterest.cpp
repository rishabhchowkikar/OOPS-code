#include <iostream>
using namespace std;
int main()
{
    int principal, rate, time;
    float SI;
    cout << "Enter the Principal amount, Rate of Interest, and Time: ";
    cin >> principal >> rate >> time;
    SI = (principal * rate * time) / 100;
    cout << "Simple interest would be: " << SI;
    return 0;
}